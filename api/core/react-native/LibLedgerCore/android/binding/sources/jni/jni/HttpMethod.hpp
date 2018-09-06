// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#ifndef DJINNI_GENERATED_HTTPMETHOD_HPP_JNI_
#define DJINNI_GENERATED_HTTPMETHOD_HPP_JNI_

#include "../../api/HttpMethod.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class HttpMethod final : ::djinni::JniEnum {
public:
    using CppType = ::ledger::core::api::HttpMethod;
    using JniType = jobject;

    using Boxed = HttpMethod;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<HttpMethod>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<HttpMethod>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    HttpMethod() : JniEnum("co/ledger/core/HttpMethod") {}
    friend ::djinni::JniClass<HttpMethod>;
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_HTTPMETHOD_HPP_JNI_