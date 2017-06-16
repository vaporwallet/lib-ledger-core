/*
 *
 * AbstractWallet
 * ledger-core
 *
 * Created by Pierre Pollastri on 27/04/2017.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#include "AbstractWallet.hpp"
#include <wallet/pool/WalletPool.hpp>
#include <debug/LoggerApi.hpp>
#include <wallet/bitcoin/BitcoinLikeWallet.hpp>
#include <wallet/common/database/AccountDatabaseHelper.h>
#include <api/I32Callback.hpp>

namespace ledger {
    namespace core {
        AbstractWallet::AbstractWallet(const std::string& walletName,
                                       const api::Currency& currency,
                                       const std::shared_ptr<WalletPool> &pool,
                                       const std::shared_ptr<DynamicObject>& configuration,
                                       const DerivationScheme& derivationScheme
        )
            : DedicatedContext(pool->getDispatcher()->getSerialExecutionContext(fmt::format("wallet_{}", walletName))), _scheme(derivationScheme)
        {
            _name = walletName;
            _uid = WalletDatabaseEntry::createWalletUid(pool->getName(), _name, currency.name);
            _currency = currency;
            _configuration = configuration;
            _externalPreferences = pool->getExternalPreferences()->getSubPreferences(fmt::format("wallet_{}", walletName));
            _internalPreferences = pool->getInternalPreferences()->getSubPreferences(fmt::format("wallet_{}", walletName));
            _publisher = std::make_shared<EventPublisher>(getContext());
            _logger = pool->logger();
            _loggerApi = std::make_shared<LoggerApi>(pool->logger());
            _database = pool->getDatabaseSessionPool();
            _mainExecutionContext = pool->getDispatcher()->getMainExecutionContext();
            //pool->getEventPublisher()->relay(_publisher->getEventBus());
        }

        std::shared_ptr<api::EventBus> AbstractWallet::getEventBus() {
            return _publisher->getEventBus();
        }

        std::shared_ptr<api::Preferences> AbstractWallet::getPreferences() {
            return _externalPreferences;
        }

        bool AbstractWallet::isInstanceOfBitcoinLikeWallet() {
            return getWalletType() == api::WalletType::BITCOIN;
        }

        bool AbstractWallet::isInstanceOfEthereumLikeWallet() {
            return getWalletType() == api::WalletType::ETHEREUM;
        }

        bool AbstractWallet::isInstanceOfRippleLikeWallet() {
            return getWalletType() == api::WalletType::RIPPLE;
        }

        std::shared_ptr<Preferences> AbstractWallet::getAccountInternalPreferences(int32_t index) {
            return getInternalPreferences()->getSubPreferences(fmt::format("account_{}", index));
        }

        std::shared_ptr<EventPublisher> AbstractWallet::getEventPublisher() const {
            return _publisher;
        }

        std::shared_ptr<Preferences> AbstractWallet::getInternalPreferences() const {
            return _internalPreferences;
        }

        std::shared_ptr<Preferences> AbstractWallet::getExternalPreferences() const {
            return _externalPreferences;
        }

        std::shared_ptr<api::Logger> AbstractWallet::getLogger() {
            return _loggerApi;
        }

        api::WalletType AbstractWallet::getWalletType() {
            return _currency.walletType;
        }

        std::shared_ptr<spdlog::logger> AbstractWallet::logger() const {
            return _logger;
        }

        std::shared_ptr<Preferences> AbstractWallet::getAccountExternalPreferences(int32_t index) {
            return getExternalPreferences()->getSubPreferences(fmt::format("account_{}", index));;
        }

        std::shared_ptr<api::Preferences> AbstractWallet::getAccountPreferences(int32_t index) {
            return getAccountExternalPreferences(index);
        }

        std::shared_ptr<DatabaseSessionPool> AbstractWallet::getDatabase() const {
            return _database;
        }

        api::Currency AbstractWallet::getCurrency() {
            return _currency;
        }

        std::string AbstractWallet::getName() {
            return _name;
        }

        std::shared_ptr<api::BitcoinLikeWallet> AbstractWallet::asBitcoinLikeWallet() {
            return asInstanceOf<BitcoinLikeWallet>();
        }

        std::shared_ptr<api::ExecutionContext> AbstractWallet::getMainExecutionContext() const {
            return _mainExecutionContext;
        }

        Future<int32_t> AbstractWallet::getNextAccountIndex() {
            auto self = shared_from_this();
            return async<int32_t>([self] () {
                soci::session sql(self->getDatabase()->getPool());
                return AccountDatabaseHelper::computeNextAccountIndex(sql, self->getWalletUid());
            });
        }

        void AbstractWallet::getNextAccountIndex(const std::shared_ptr<api::I32Callback> &callback) {
            getNextAccountIndex().callback(getMainExecutionContext(), callback);
        }

        std::string AbstractWallet::getWalletUid() const {
            return _uid;
        }

        std::shared_ptr<DynamicObject> AbstractWallet::getConfiguration() const {
            return _configuration;
        }

        const DerivationScheme& AbstractWallet::getDerivationScheme() const {
            return _scheme;
        }

    }
}