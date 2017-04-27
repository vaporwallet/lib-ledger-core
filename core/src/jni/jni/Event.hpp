// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#ifndef DJINNI_GENERATED_EVENT_HPP
#define DJINNI_GENERATED_EVENT_HPP

#include "../../api/Event.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class Event final : ::djinni::JniInterface<::ledger::core::api::Event, Event> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::Event>;
    using CppOptType = std::shared_ptr<::ledger::core::api::Event>;
    using JniType = jobject;

    using Boxed = Event;

    ~Event();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<Event>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<Event>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    Event();
    friend ::djinni::JniClass<Event>;
    friend ::djinni::JniInterface<::ledger::core::api::Event, Event>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_EVENT_HPP