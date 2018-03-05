// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from big_int.djinni

#include "NJSBigIntCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBigInt::add) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::add needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigInt *njs_ptr_arg_0 = static_cast<NJSBigInt *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSBigInt failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::add : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->add(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::subtract) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::subtract needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigInt *njs_ptr_arg_0 = static_cast<NJSBigInt *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSBigInt failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::subtract : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->subtract(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::multiply) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::multiply needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigInt *njs_ptr_arg_0 = static_cast<NJSBigInt *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSBigInt failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::multiply : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->multiply(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::divide) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::divide needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigInt *njs_ptr_arg_0 = static_cast<NJSBigInt *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSBigInt failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::divide : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->divide(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::divideAndRemainder) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::divideAndRemainder needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigInt *njs_ptr_arg_0 = static_cast<NJSBigInt *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSBigInt failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::divideAndRemainder : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->divideAndRemainder(arg_0);

    //Wrap result in node object
    Local<Array> arg_1 = Nan::New<Array>();
    for(size_t i = 0; i < result.size(); i++)
    {
        auto arg_1_elem = NJSBigInt::wrap(result[i]);

        arg_1->Set((int)i,arg_1_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::pow) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::pow needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::pow : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->pow(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::toDecimalString) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBigInt::toDecimalString needs 3 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    String::Utf8Value string_arg_1(info[1]->ToString());
    auto arg_1 = std::string(*string_arg_1);
    String::Utf8Value string_arg_2(info[2]->ToString());
    auto arg_2 = std::string(*string_arg_2);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::toDecimalString : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->toDecimalString(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_3);
}
NAN_METHOD(NJSBigInt::toString) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::toString needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::toString : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->toString(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::intValue) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBigInt::intValue needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::intValue : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->intValue();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBigInt::compare) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::compare needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigInt *njs_ptr_arg_0 = static_cast<NJSBigInt *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSBigInt failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::compare : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->compare(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBigInt::fromDecimalString) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBigInt::fromDecimalString needs 3 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();
    String::Utf8Value string_arg_2(info[2]->ToString());
    auto arg_2 = std::string(*string_arg_2);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::fromDecimalString : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->fromDecimalString(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_3);
}
NAN_METHOD(NJSBigInt::fromIntegerString) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBigInt::fromIntegerString needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::fromIntegerString : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->fromIntegerString(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBigInt::fromLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBigInt::fromLong needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBigInt* obj = Nan::ObjectWrap::Unwrap<NJSBigInt>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBigInt::fromLong : implementation of BigInt is not valid");
    }

    auto result = cpp_impl->fromLong(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSBigInt::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBigInt function can only be called as constructor (use New)");
    }

    //Check if NJSBigInt::New called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBigInt::New needs same number of arguments as ledger::core::api::BigInt::fromDecimalString method");
    }

    //Unwrap objects to get C++ classes
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();
    String::Utf8Value string_arg_2(info[2]->ToString());
    auto arg_2 = std::string(*string_arg_2);

    //Call factory
    auto cpp_instance = ledger::core::api::BigInt::fromDecimalString(arg_0,arg_1,arg_2);
    NJSBigInt *node_instance = new NJSBigInt(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBigInt::BigInt_prototype;

Handle<Object> NJSBigInt::wrap(const std::shared_ptr<ledger::core::api::BigInt> &object) {
    Local<ObjectTemplate> local_prototype = Nan::New(BigInt_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBigInt *new_obj = new NJSBigInt(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBigInt::wrap: object template not valid");
    }
    return obj;
}

void NJSBigInt::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBigInt::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBigInt").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"add", add);
    Nan::SetPrototypeMethod(func_template,"subtract", subtract);
    Nan::SetPrototypeMethod(func_template,"multiply", multiply);
    Nan::SetPrototypeMethod(func_template,"divide", divide);
    Nan::SetPrototypeMethod(func_template,"divideAndRemainder", divideAndRemainder);
    Nan::SetPrototypeMethod(func_template,"pow", pow);
    Nan::SetPrototypeMethod(func_template,"toDecimalString", toDecimalString);
    Nan::SetPrototypeMethod(func_template,"toString", toString);
    Nan::SetPrototypeMethod(func_template,"intValue", intValue);
    Nan::SetPrototypeMethod(func_template,"compare", compare);
    //Set object prototype
    BigInt_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBigInt").ToLocalChecked(), func_template->GetFunction());
}
