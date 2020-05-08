#ifndef __X10_ARRAY_DISTARRAY_BLOCK_3_H
#define __X10_ARRAY_DISTARRAY_BLOCK_3_H

#include <x10rt.h>


#define X10_ARRAY_DISTARRAY_H_NODEPS
#include <x10/array/DistArray.h>
#undef X10_ARRAY_DISTARRAY_H_NODEPS
#define X10_LANG_FUN_0_3_H_NODEPS
#include <x10/lang/Fun_0_3.h>
#undef X10_LANG_FUN_0_3_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace array { 
class DenseIterationSpace_3;
} } 
namespace x10 { namespace compiler { 
class TransientInitExpr;
} } 
namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState_B3;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState;
} } 
namespace x10 { namespace array { 
class Dist_Block_3;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class DistArray_Block_3_Strings {
  public:
    static ::x10::lang::String sl__154028;
    static ::x10::lang::String sl__154029;
};

template<class TPMGL(T)> class DistArray_Block_3;
template <> class DistArray_Block_3<void>;
template<class TPMGL(T)> class DistArray_Block_3 : public ::x10::array::DistArray<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::array::DistArray_Block_3<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::DistArray_Block_3<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::DistArray_Block_3<TPMGL(T)> > _itable_2;
    
    x10_long rank();
    ::x10::array::DenseIterationSpace_3* FMGL(globalIndices);
    
    x10_long FMGL(numElems_1);
    
    x10_long FMGL(numElems_2);
    
    x10_long FMGL(numElems_3);
    
    ::x10::array::DenseIterationSpace_3* FMGL(localIndices);
    
    virtual ::x10::array::DenseIterationSpace_3* reloadLocalIndices(
      );
    x10_long FMGL(minIndex_1);
    
    virtual x10_long reloadMinIndex_1();
    x10_long FMGL(numElemsLocal_1);
    
    virtual x10_long reloadNumElemsLocal_1();
    void _constructor(x10_long m, x10_long n, x10_long p, ::x10::lang::PlaceGroup* pg,
                      ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    static ::x10::array::DistArray_Block_3<TPMGL(T)>* _make(
             x10_long m, x10_long n, x10_long p, ::x10::lang::PlaceGroup* pg,
             ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    void _constructor(x10_long m, x10_long n, x10_long p,
                      ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    static ::x10::array::DistArray_Block_3<TPMGL(T)>* _make(
             x10_long m, x10_long n, x10_long p, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    void _constructor(x10_long m, x10_long n, x10_long p,
                      ::x10::lang::PlaceGroup* pg);
    
    static ::x10::array::DistArray_Block_3<TPMGL(T)>* _make(
             x10_long m, x10_long n, x10_long p, ::x10::lang::PlaceGroup* pg);
    
    void _constructor(x10_long m, x10_long n, x10_long p);
    
    static ::x10::array::DistArray_Block_3<TPMGL(T)>* _make(
             x10_long m, x10_long n, x10_long p);
    
    virtual ::x10::array::IterationSpace* globalIndices();
    virtual ::x10::array::IterationSpace* localIndices();
    virtual ::x10::lang::Place place(x10_long i, x10_long j,
                                     x10_long k);
    virtual ::x10::lang::Place place(::x10::lang::Point* p);
    virtual TPMGL(T) __apply(x10_long i, x10_long j, x10_long k);
    virtual TPMGL(T) __apply(::x10::lang::Point* p);
    virtual TPMGL(T) __set(x10_long i, x10_long j, x10_long k,
                           TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual void validateIndex(x10_long i, x10_long j, x10_long k);
    virtual x10_long offset(x10_long i, x10_long j, x10_long k);
    virtual ::x10::lang::Rail< TPMGL(T) >* getPatch(::x10::array::IterationSpace* space);
    virtual ::x10::array::DistArray_Block_3<TPMGL(T)>* x10__array__DistArray_Block_3____this__x10__array__DistArray_Block_3(
      );
    virtual void __fieldInitializers_x10_array_DistArray_Block_3(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::DistArray_Block_3<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::DistArray_Block_3<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::array::DistArray<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.DistArray_Block_3";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class DistArray_Block_3<void> : public ::x10::array::DistArray<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_long validateSize(x10_long m, x10_long n, x10_long p);
    
    
};

} } 
#endif // X10_ARRAY_DISTARRAY_BLOCK_3_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class DistArray_Block_3;
} } 

#ifndef X10_ARRAY_DISTARRAY_BLOCK_3_H_NODEPS
#define X10_ARRAY_DISTARRAY_BLOCK_3_H_NODEPS
#include <x10/array/DistArray.h>
#include <x10/lang/Fun_0_3.h>
#include <x10/lang/Long.h>
#include <x10/array/DenseIterationSpace_3.h>
#include <x10/compiler/TransientInitExpr.h>
#include <x10/array/LocalState_B3.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/array/LocalState.h>
#include <x10/array/Dist_Block_3.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Place.h>
#include <x10/lang/Zero.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Boolean.h>
#include <x10/array/BlockingUtils.h>
#include <x10/lang/Point.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Rail.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_DISTARRAY_BLOCK_3_H_GENERICS
#define X10_ARRAY_DISTARRAY_BLOCK_3_H_GENERICS
#endif // X10_ARRAY_DISTARRAY_BLOCK_3_H_GENERICS
#ifndef X10_ARRAY_DISTARRAY_BLOCK_3_H_IMPLEMENTATION
#define X10_ARRAY_DISTARRAY_BLOCK_3_H_IMPLEMENTATION
#include <x10/array/DistArray_Block_3.h>

#ifndef X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__2_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_3__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::array::LocalState_B3<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_3__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::array::LocalState_B3<TPMGL(T)>* __apply(){
        return ::x10::array::LocalState_B3<void>::template make< TPMGL(T) >(
                 pg, m, n, p, init);
        
    }
    
    // captured environment
    ::x10::lang::PlaceGroup* pg;
    x10_long m;
    x10_long n;
    x10_long p;
    ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pg);
        buf.write(this->m);
        buf.write(this->n);
        buf.write(this->p);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_3__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_3__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceGroup* that_pg = buf.read< ::x10::lang::PlaceGroup*>();
        x10_long that_m = buf.read<x10_long>();
        x10_long that_n = buf.read<x10_long>();
        x10_long that_p = buf.read<x10_long>();
        ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>*>();
        x10_array_DistArray_Block_3__closure__2<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_3__closure__2<TPMGL(T) >(that_pg, that_m, that_n, that_p, that_init);
        return this_;
    }
    
    x10_array_DistArray_Block_3__closure__2(::x10::lang::PlaceGroup* pg, x10_long m, x10_long n, x10_long p, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init) : pg(pg), m(m), n(n), p(p), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState_B3<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState_B3<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_3.x10:64";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::array::LocalState_B3<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_3__closure__2<TPMGL(T) > >x10_array_DistArray_Block_3__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_3__closure__2<TPMGL(T) >::__apply, &x10_array_DistArray_Block_3__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_3__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState_B3<TPMGL(T)>*> >, &x10_array_DistArray_Block_3__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_3__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_3__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__2_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__1_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_3__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_3__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::array::LocalState<TPMGL(T)>* __apply(){
        return reinterpret_cast< ::x10::array::LocalState<TPMGL(T)>*>(x10_array_DistArray_Block_3__closure__2<TPMGL(T)>(pg, m, n, p, init).__apply());
        
    }
    
    // captured environment
    ::x10::lang::PlaceGroup* pg;
    x10_long m;
    x10_long n;
    x10_long p;
    ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->pg);
        buf.write(this->m);
        buf.write(this->n);
        buf.write(this->p);
        buf.write(this->init);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_3__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_3__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::PlaceGroup* that_pg = buf.read< ::x10::lang::PlaceGroup*>();
        x10_long that_m = buf.read<x10_long>();
        x10_long that_n = buf.read<x10_long>();
        x10_long that_p = buf.read<x10_long>();
        ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* that_init = buf.read< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>*>();
        x10_array_DistArray_Block_3__closure__1<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_3__closure__1<TPMGL(T) >(that_pg, that_m, that_n, that_p, that_init);
        return this_;
    }
    
    x10_array_DistArray_Block_3__closure__1(::x10::lang::PlaceGroup* pg, x10_long m, x10_long n, x10_long p, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init) : pg(pg), m(m), n(n), p(p), init(init) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_3.x10:64";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>::template itable <x10_array_DistArray_Block_3__closure__1<TPMGL(T) > >x10_array_DistArray_Block_3__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_3__closure__1<TPMGL(T) >::__apply, &x10_array_DistArray_Block_3__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_3__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >, &x10_array_DistArray_Block_3__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_3__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_3__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__1_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__3_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_3.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_3__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_3__closure__3<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long id__55, x10_long id__56, x10_long id__57){
        return ::x10aux::zeroValue< TPMGL(T) >();
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_3__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_3__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_array_DistArray_Block_3__closure__3<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_3__closure__3<TPMGL(T) >();
        return this_;
    }
    
    x10_array_DistArray_Block_3__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_3.x10:100";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_3__closure__3<TPMGL(T) > >x10_array_DistArray_Block_3__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_3__closure__3<TPMGL(T) >::__apply, &x10_array_DistArray_Block_3__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_3__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_array_DistArray_Block_3__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_3__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_3__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__3_CLOSURE
#ifndef X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__4_CLOSURE
#define X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_3.h>
template<class TPMGL(T)> class x10_array_DistArray_Block_3__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_3__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long id__58, x10_long id__59, x10_long id__60){
        return ::x10aux::zeroValue< TPMGL(T) >();
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_array_DistArray_Block_3__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_array_DistArray_Block_3__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_array_DistArray_Block_3__closure__4<TPMGL(T) >* this_ = new (storage) x10_array_DistArray_Block_3__closure__4<TPMGL(T) >();
        return this_;
    }
    
    x10_array_DistArray_Block_3__closure__4() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/array/DistArray_Block_3.x10:114";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_array_DistArray_Block_3__closure__4<TPMGL(T) > >x10_array_DistArray_Block_3__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_array_DistArray_Block_3__closure__4<TPMGL(T) >::__apply, &x10_array_DistArray_Block_3__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_array_DistArray_Block_3__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_array_DistArray_Block_3__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_array_DistArray_Block_3__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_array_DistArray_Block_3__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_ARRAY_DISTARRAY_BLOCK_3__CLOSURE__4_CLOSURE
template<class TPMGL(T)> typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::array::DistArray_Block_3<TPMGL(T)> >  x10::array::DistArray_Block_3<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::array::DistArray<TPMGL(T)>::iterator, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::array::DistArray_Block_3<TPMGL(T)> >  x10::array::DistArray_Block_3<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::DistArray_Block_3<TPMGL(T)> >  x10::array::DistArray_Block_3<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::DistArray_Block_3<TPMGL(T)>::__apply, &::x10::lang::X10Class::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::array::DistArray_Block_3<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::array::DistArray_Block_3<TPMGL(T)>")};

//#line 26 "x10/array/DistArray_Block_3.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_3<TPMGL(T)>::rank(
  ) {
    return ((x10_long)3ll);
    
}

//#line 28 "x10/array/DistArray_Block_3.x10"

//#line 30 "x10/array/DistArray_Block_3.x10"

//#line 32 "x10/array/DistArray_Block_3.x10"

//#line 34 "x10/array/DistArray_Block_3.x10"

//#line 37 "x10/array/DistArray_Block_3.x10"

//#line 38 "x10/array/DistArray_Block_3.x10"
template<class TPMGL(T)> ::x10::array::DenseIterationSpace_3* x10::array::DistArray_Block_3<TPMGL(T)>::reloadLocalIndices(
  ) {
    
    //#line 40 "x10/array/DistArray_Block_3.x10"
    ::x10::array::LocalState_B3<TPMGL(T)>* ls = ::x10aux::class_cast< ::x10::array::LocalState_B3<TPMGL(T)>*>(this->FMGL(localHandle)->x10::lang::template PlaceLocalHandle< ::x10::array::LocalState<TPMGL(T)>*>::__apply());
    
    //#line 41 "x10/array/DistArray_Block_3.x10"
    return (!::x10aux::struct_equals(ls, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))
      ? (::x10aux::nullCheck(ls)->FMGL(dist)->FMGL(localIndices))
      : (::x10::array::DenseIterationSpace_3::_make(((x10_long)0ll),
                                                    ((x10_long)0ll),
                                                    ((x10_long)0ll),
                                                    ((x10_long)-1ll),
                                                    ((x10_long)-1ll),
                                                    ((x10_long)-1ll)));
    
}

//#line 45 "x10/array/DistArray_Block_3.x10"

//#line 46 "x10/array/DistArray_Block_3.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_3<TPMGL(T)>::reloadMinIndex_1(
  ) {
    return this->FMGL(localIndices)->x10::array::DenseIterationSpace_3::min(
             ((x10_long)0ll));
    
}

//#line 49 "x10/array/DistArray_Block_3.x10"

//#line 50 "x10/array/DistArray_Block_3.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_3<TPMGL(T)>::reloadNumElemsLocal_1(
  ) {
    return ((((this->FMGL(localIndices)->x10::array::DenseIterationSpace_3::max(
                 ((x10_long)0ll))) - (this->FMGL(minIndex_1)))) + (((x10_long)1ll)));
    
}

//#line 63 "x10/array/DistArray_Block_3.x10"
/**
     * Construct a m by n by p block distributed DistArray
     * whose data is distributed over pg and initialized using
     * the init function.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     * @param p number of elements in the third dimension
     * @param pg the PlaceGroup to use to distibute the elements.
     * @param init the element initialization function
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init) {
    
    //#line 64 "x10/array/DistArray_Block_3.x10"
    (this)->::x10::array::DistArray<TPMGL(T)>::_constructor(
      pg, reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::array::LocalState<TPMGL(T)>*> >(sizeof(x10_array_DistArray_Block_3__closure__1<TPMGL(T)>)))x10_array_DistArray_Block_3__closure__1<TPMGL(T)>(pg, m, n, p, init))),
      ::x10::array::DistArray_Block_3<void>::validateSize(
        m, n, p));
    
    //#line 63 "x10/array/DistArray_Block_3.x10"
    
    //#line 24 "x10/array/DistArray_Block_3.x10"
    this->x10::array::template DistArray_Block_3<TPMGL(T)>::__fieldInitializers_x10_array_DistArray_Block_3();
    
    //#line 65 "x10/array/DistArray_Block_3.x10"
    this->FMGL(globalIndices) = ::x10::array::DenseIterationSpace_3::_make(((x10_long)0ll),
                                                                           ((x10_long)0ll),
                                                                           ((x10_long)0ll),
                                                                           ((m) - (((x10_long)1ll))),
                                                                           ((n) - (((x10_long)1ll))),
                                                                           ((p) - (((x10_long)1ll))));
    
    //#line 66 "x10/array/DistArray_Block_3.x10"
    this->FMGL(numElems_1) = m;
    
    //#line 67 "x10/array/DistArray_Block_3.x10"
    this->FMGL(numElems_2) = n;
    
    //#line 68 "x10/array/DistArray_Block_3.x10"
    this->FMGL(numElems_3) = p;
    
    //#line 69 "x10/array/DistArray_Block_3.x10"
    this->FMGL(localIndices) = this->x10::array::template DistArray_Block_3<TPMGL(T)>::reloadLocalIndices();
    
    //#line 70 "x10/array/DistArray_Block_3.x10"
    this->FMGL(minIndex_1) = this->x10::array::template DistArray_Block_3<TPMGL(T)>::reloadMinIndex_1();
    
    //#line 71 "x10/array/DistArray_Block_3.x10"
    this->FMGL(numElemsLocal_1) = this->x10::array::template DistArray_Block_3<TPMGL(T)>::reloadNumElemsLocal_1();
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_3<TPMGL(T)>* x10::array::DistArray_Block_3<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init)
{
    ::x10::array::DistArray_Block_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_3<TPMGL(T)> >()) ::x10::array::DistArray_Block_3<TPMGL(T)>();
    this_->_constructor(m, n, p, pg, init);
    return this_;
}



//#line 85 "x10/array/DistArray_Block_3.x10"
/**
     * Construct a m by n by p block distributed DistArray
     * whose data is distributed over Place.places() and 
     * initialized using the provided init closure.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     * @param p number of elements in the third dimension
     * @param init the element initialization function
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init) {
    
    //#line 86 "x10/array/DistArray_Block_3.x10"
    (this)->::x10::array::DistArray_Block_3<TPMGL(T)>::_constructor(
      m, n, p, ::x10::lang::Place::places(), init);
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_3<TPMGL(T)>* x10::array::DistArray_Block_3<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init)
{
    ::x10::array::DistArray_Block_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_3<TPMGL(T)> >()) ::x10::array::DistArray_Block_3<TPMGL(T)>();
    this_->_constructor(m, n, p, init);
    return this_;
}



//#line 99 "x10/array/DistArray_Block_3.x10"
/**
     * Construct a m by n by p block distributed DistArray
     * whose data is distributed over pg and zero-initialized.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     * @param p number of elements in the third dimension
     * @param pg the PlaceGroup to use to distibute the elements.
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::PlaceGroup* pg) {
    
    //#line 100 "x10/array/DistArray_Block_3.x10"
    (this)->::x10::array::DistArray_Block_3<TPMGL(T)>::_constructor(
      m, n, p, pg, reinterpret_cast< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_array_DistArray_Block_3__closure__3<TPMGL(T)>)))x10_array_DistArray_Block_3__closure__3<TPMGL(T)>())));
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_3<TPMGL(T)>* x10::array::DistArray_Block_3<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::PlaceGroup* pg) {
    ::x10::array::DistArray_Block_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_3<TPMGL(T)> >()) ::x10::array::DistArray_Block_3<TPMGL(T)>();
    this_->_constructor(m, n, p, pg);
    return this_;
}



//#line 113 "x10/array/DistArray_Block_3.x10"
/**
     * Construct a m by n by p block distributed DistArray
     * whose data is distributed over Place.places() and 
     * zero-initialized.
     *
     * @param m number of elements in the first dimension
     * @param n number of elements in the second dimension
     * @param p number of elements in the second dimension
     */
template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p) {
    
    //#line 114 "x10/array/DistArray_Block_3.x10"
    (this)->::x10::array::DistArray_Block_3<TPMGL(T)>::_constructor(
      m, n, p, ::x10::lang::Place::places(), reinterpret_cast< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_array_DistArray_Block_3__closure__4<TPMGL(T)>)))x10_array_DistArray_Block_3__closure__4<TPMGL(T)>())));
    
}
template<class TPMGL(T)> ::x10::array::DistArray_Block_3<TPMGL(T)>* x10::array::DistArray_Block_3<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p)
{
    ::x10::array::DistArray_Block_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_3<TPMGL(T)> >()) ::x10::array::DistArray_Block_3<TPMGL(T)>();
    this_->_constructor(m, n, p);
    return this_;
}



//#line 123 "x10/array/DistArray_Block_3.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the global iteration space (valid indices) of the DistArray.
     * @return an IterationSpace for the DistArray
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::DistArray_Block_3<TPMGL(T)>::globalIndices(
  ) {
    return reinterpret_cast< ::x10::array::IterationSpace*>(this->FMGL(globalIndices));
    
}

//#line 131 "x10/array/DistArray_Block_3.x10"
/**
     * Get an IterationSpace that represents all Points contained in
     * the local iteration space (valid indices) of the DistArray at the current Place.
     * @return an IterationSpace for the local portion of the DistArray
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::DistArray_Block_3<TPMGL(T)>::localIndices(
  ) {
    return reinterpret_cast< ::x10::array::IterationSpace*>(this->FMGL(localIndices));
    
}

//#line 145 "x10/array/DistArray_Block_3.x10"
/**
     * Return the Place which contains the data for the argument
     * index or Place.INVALID_PLACE if the Point is not in the globalIndices
     * of this DistArray
     *
     * @param i the index in the first dimension
     * @param j the index in the second dimension
     * @param k the index in the third dimension
     * @return the Place where (i,j,k) is a valid index in the DistArray; 
     *          will return Place.INVALID_PLACE if (i,j,k) is not contained in globalIndices
     */
template<class TPMGL(T)> ::x10::lang::Place x10::array::DistArray_Block_3<TPMGL(T)>::place(
  x10_long i, x10_long j, x10_long k) {
    
    //#line 146 "x10/array/DistArray_Block_3.x10"
    if ((((((j) < (((x10_long)0ll))) || ((j) >= (this->FMGL(numElems_2)))) ||
        ((k) < (((x10_long)0ll)))) || ((k) >= (this->FMGL(numElems_3)))))
    {
        return ::x10::lang::Place::FMGL(INVALID_PLACE__get)();
        
    }
    
    //#line 147 "x10/array/DistArray_Block_3.x10"
    x10_long tmp = ::x10::array::BlockingUtils::mapIndexToBlockPartition(
                     ((x10_long)0ll), ((this->FMGL(numElems_1)) - (((x10_long)1ll))),
                     ::x10aux::nullCheck(this->FMGL(placeGroup))->x10::lang::PlaceGroup::size(),
                     i);
    
    //#line 148 "x10/array/DistArray_Block_3.x10"
    return (::x10aux::struct_equals(tmp, ((x10_long)-1ll)))
      ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)()) : (::x10aux::nullCheck(this->FMGL(placeGroup))->__apply(
                                                              tmp));
    
}

//#line 161 "x10/array/DistArray_Block_3.x10"
/**
     * Return the Place which contains the data for the argument
     * Point or Place.INVALID_PLACE if the Point is not in the globalIndices
     * of this DistArray
     *
     * @param p the Point to lookup
     * @return the Place where p is a valid index in the DistArray; 
     *          will return Place.INVALID_PLACE if p is not contained in globalIndices
     */
template<class TPMGL(T)> ::x10::lang::Place x10::array::DistArray_Block_3<TPMGL(T)>::place(
  ::x10::lang::Point* p) {
    return this->x10::array::template DistArray_Block_3<TPMGL(T)>::place(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                       ((x10_long)2ll)));
    
}

//#line 173 "x10/array/DistArray_Block_3.x10"
/**
     * Return the element of this array corresponding to the given index.
     * 
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @param k the given index in the third dimension
     * @return the element of this array corresponding to the given index.
     * @see #set(T, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_3<TPMGL(T)>::__apply(
  x10_long i, x10_long j, x10_long k) {
    
    //#line 174 "x10/array/DistArray_Block_3.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        this->x10::array::template DistArray_Block_3<TPMGL(T)>::validateIndex(
          i, j, k);
    }
    
    //#line 175 "x10/array/DistArray_Block_3.x10"
    return (this->FMGL(raw))->unchecked_apply(this->x10::array::template DistArray_Block_3<TPMGL(T)>::offset(
                                                i, j, k));
    
}

//#line 186 "x10/array/DistArray_Block_3.x10"
/**
     * Return the element of this array corresponding to the given Point.
     * 
     * @param p the given Point
     * @return the element of this array corresponding to the given Point.
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_3<TPMGL(T)>::__apply(
  ::x10::lang::Point* p) {
    return this->x10::array::template DistArray_Block_3<TPMGL(T)>::__apply(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                       ((x10_long)2ll)));
    
}

//#line 200 "x10/array/DistArray_Block_3.x10"
/**
     * Set the element of this array corresponding to the given index to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @param k the given index in the third dimension
     * @return the new value of the element of this array corresponding to the given index.
     * @see #operator(Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_3<TPMGL(T)>::__set(
  x10_long i, x10_long j, x10_long k, TPMGL(T) v) {
    
    //#line 201 "x10/array/DistArray_Block_3.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        this->x10::array::template DistArray_Block_3<TPMGL(T)>::validateIndex(
          i, j, k);
    }
    
    //#line 202 "x10/array/DistArray_Block_3.x10"
    return (this->FMGL(raw))->unchecked_set(this->x10::array::template DistArray_Block_3<TPMGL(T)>::offset(
                                              i, j, k), v);
    
}

//#line 215 "x10/array/DistArray_Block_3.x10"
/**
     * Set the element of this array corresponding to the given Point to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param p the given Point
     * @return the new value of the element of this array corresponding to the given Point.
     * @see #operator(Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::DistArray_Block_3<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    return this->x10::array::template DistArray_Block_3<TPMGL(T)>::__set(
             ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
               ((x10_long)0ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                   ((x10_long)1ll)), ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                       ((x10_long)2ll)),
             v);
    
}

//#line 223 "x10/array/DistArray_Block_3.x10"
template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::validateIndex(
  x10_long i, x10_long j, x10_long k) {
    
    //#line 224 "x10/array/DistArray_Block_3.x10"
    if ((PLACE_CHECK_BOOL || BOUNDS_CHECK_BOOL)) {
        
        //#line 225 "x10/array/DistArray_Block_3.x10"
        if ((BOUNDS_CHECK_BOOL && ((((((j) < (((x10_long)0ll))) ||
                                   ((j) >= (this->FMGL(numElems_2)))) ||
                                   ((k) < (((x10_long)0ll)))) ||
                                   ((k) >= (this->FMGL(numElems_3)))))))
        {
            
            //#line 226 "x10/array/DistArray_Block_3.x10"
            ::x10::array::DistArray<void>::raiseBoundsError(
              i, j, k);
        }
        
        //#line 228 "x10/array/DistArray_Block_3.x10"
        if ((((i) < (this->FMGL(minIndex_1))) || ((i) >= (((this->FMGL(minIndex_1)) + (this->FMGL(numElemsLocal_1)))))))
        {
            
            //#line 229 "x10/array/DistArray_Block_3.x10"
            if ((BOUNDS_CHECK_BOOL && ((((i) < (((x10_long)0ll))) ||
                                       ((i) >= (this->FMGL(numElems_1)))))))
            {
                
                //#line 230 "x10/array/DistArray_Block_3.x10"
                ::x10::array::DistArray<void>::raiseBoundsError(
                  i, j, k);
            }
            
            //#line 232 "x10/array/DistArray_Block_3.x10"
            if (PLACE_CHECK_BOOL) {
                ::x10::array::DistArray<void>::raisePlaceError(
                  i, j, k);
            }
            
        }
        
    }
    
}

//#line 237 "x10/array/DistArray_Block_3.x10"
template<class TPMGL(T)> x10_long x10::array::DistArray_Block_3<TPMGL(T)>::offset(
  x10_long i, x10_long j, x10_long k) {
    
    //#line 238 "x10/array/DistArray_Block_3.x10"
    return ((k) + (((this->FMGL(numElems_3)) * (((j) + (((((i) - (this->FMGL(minIndex_1)))) * (this->FMGL(numElems_2)))))))));
    
}

//#line 249 "x10/array/DistArray_Block_3.x10"
/**
     * Returns the specified rectangular patch of this array as a Rail.
     * 
     * @param space the IterationSpace representing the portion of this array to copy
     * @see offset
     * @throws ArrayIndexOutOfBoundsException if the specified region is not
     *        contained in this array
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::array::DistArray_Block_3<TPMGL(T)>::getPatch(
  ::x10::array::IterationSpace* space) {
    
    //#line 250 "x10/array/DistArray_Block_3.x10"
    ::x10::array::DenseIterationSpace_3* r = ::x10aux::class_cast< ::x10::array::DenseIterationSpace_3*>(space);
    
    //#line 252 "x10/array/DistArray_Block_3.x10"
    if ((BOUNDS_CHECK_BOOL && !((((((((this->FMGL(localIndices)->FMGL(min0)) <= (::x10aux::nullCheck(r)->FMGL(min0))) &&
        ((::x10aux::nullCheck(r)->FMGL(max0)) <= (this->FMGL(localIndices)->FMGL(max0)))) &&
        ((this->FMGL(localIndices)->FMGL(min1)) <= (::x10aux::nullCheck(r)->FMGL(min1)))) &&
        ((::x10aux::nullCheck(r)->FMGL(max1)) <= (this->FMGL(localIndices)->FMGL(max1)))) &&
        ((this->FMGL(localIndices)->FMGL(min2)) <= (::x10aux::nullCheck(r)->FMGL(min2)))) &&
        ((::x10aux::nullCheck(r)->FMGL(max2)) <= (this->FMGL(localIndices)->FMGL(max2)))))))
    {
        
        //#line 256 "x10/array/DistArray_Block_3.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::DistArray_Block_3_Strings::sl__154028), r), (&::x10::array::DistArray_Block_3_Strings::sl__154029)), this->FMGL(localIndices)))));
    }
    
    //#line 259 "x10/array/DistArray_Block_3.x10"
    ::x10::lang::Rail< TPMGL(T) >* patch = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(::x10aux::nullCheck(r)->x10::array::DenseIterationSpace_3::size(), false);
    
    //#line 260 "x10/array/DistArray_Block_3.x10"
    x10_long patchIndex = ((x10_long)0ll);
    
    //#line 261 "x10/array/DistArray_Block_3.x10"
    ::x10::array::DenseIterationSpace_3* p__97334 = r;
    x10_long i2__97186min__97335 = ::x10aux::nullCheck(p__97334)->x10::array::DenseIterationSpace_3::min(
                                     ((x10_long)2ll));
    x10_long i2__97186max__97336 = ::x10aux::nullCheck(p__97334)->x10::array::DenseIterationSpace_3::max(
                                     ((x10_long)2ll));
    x10_long i1__97217min__97337 = ::x10aux::nullCheck(p__97334)->x10::array::DenseIterationSpace_3::min(
                                     ((x10_long)1ll));
    x10_long i1__97217max__97338 = ::x10aux::nullCheck(p__97334)->x10::array::DenseIterationSpace_3::max(
                                     ((x10_long)1ll));
    x10_long i0__97248min__97339 = ::x10aux::nullCheck(p__97334)->x10::array::DenseIterationSpace_3::min(
                                     ((x10_long)0ll));
    x10_long i0__97248max__97340 = ::x10aux::nullCheck(p__97334)->x10::array::DenseIterationSpace_3::max(
                                     ((x10_long)0ll));
    {
        x10_long i__97341;
        for (i__97341 = i0__97248min__97339; ((i__97341) <= (i0__97248max__97340));
             i__97341 = ((i__97341) + (((x10_long)1ll))))
        {
            x10_long i__97342 = i__97341;
            {
                x10_long i__97343;
                for (i__97343 = i1__97217min__97337; ((i__97343) <= (i1__97217max__97338));
                     i__97343 = ((i__97343) + (((x10_long)1ll))))
                {
                    x10_long i__97344 = i__97343;
                    {
                        x10_long i__97345;
                        for (i__97345 = i2__97186min__97335;
                             ((i__97345) <= (i2__97186max__97336));
                             i__97345 = ((i__97345) + (((x10_long)1ll))))
                        {
                            x10_long i__97346 = i__97345;
                            
                            //#line 262 "x10/array/DistArray_Block_3.x10"
                            patch->x10::lang::template Rail< TPMGL(T) >::__set(
                              (__extension__ ({
                                  x10_long pre__97333 = patchIndex;
                                  patchIndex = ((patchIndex) + (((x10_long)1ll)));
                                  pre__97333;
                              }))
                              , this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                  this->x10::array::template DistArray_Block_3<TPMGL(T)>::offset(
                                    i__97342, i__97344, i__97346)));
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 264 "x10/array/DistArray_Block_3.x10"
    return patch;
    
}

//#line 267 "x10/array/DistArray_Block_3.x10"

//#line 24 "x10/array/DistArray_Block_3.x10"
template<class TPMGL(T)> ::x10::array::DistArray_Block_3<TPMGL(T)>*
  x10::array::DistArray_Block_3<TPMGL(T)>::x10__array__DistArray_Block_3____this__x10__array__DistArray_Block_3(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::__fieldInitializers_x10_array_DistArray_Block_3(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::array::DistArray_Block_3<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::DistArray_Block_3<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::DistArray<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(globalIndices));
    buf.write(this->FMGL(numElems_1));
    buf.write(this->FMGL(numElems_2));
    buf.write(this->FMGL(numElems_3));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::array::DistArray_Block_3<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::DistArray_Block_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::DistArray_Block_3<TPMGL(T)> >()) ::x10::array::DistArray_Block_3<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::array::DistArray_Block_3<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::DistArray<TPMGL(T)>::_deserialize_body(buf);
    FMGL(globalIndices) = buf.read< ::x10::array::DenseIterationSpace_3*>();
    FMGL(numElems_1) = buf.read<x10_long>();
    FMGL(numElems_2) = buf.read<x10_long>();
    FMGL(numElems_3) = buf.read<x10_long>();
    /* fields with @TransientInitExpr annotations */
    FMGL(localIndices) = x10::array::template DistArray_Block_3<TPMGL(T)>::reloadLocalIndices();
    FMGL(minIndex_1) = x10::array::template DistArray_Block_3<TPMGL(T)>::reloadMinIndex_1();
    FMGL(numElemsLocal_1) = x10::array::template DistArray_Block_3<TPMGL(T)>::reloadNumElemsLocal_1();
    
}

#endif // X10_ARRAY_DISTARRAY_BLOCK_3_H_IMPLEMENTATION
#endif // __X10_ARRAY_DISTARRAY_BLOCK_3_H_NODEPS
