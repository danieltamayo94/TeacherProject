#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000020 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000021 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000025 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000048 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000050 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000054 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000059 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000005F System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000060 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000061 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000062 System.Void System.Linq.Set`1::Resize()
// 0x00000063 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000064 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000065 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000066 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000068 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000072 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000073 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000074 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000076 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000078 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000079 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000081 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000082 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000083 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000084 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000085 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000086 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000008A System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000091 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000095 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000096 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000097 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[151] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[151] = 
{
	3887,
	3887,
	4017,
	4017,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[50] = 
{
	{ 0x02000004, { 77, 4 } },
	{ 0x02000005, { 81, 9 } },
	{ 0x02000006, { 92, 7 } },
	{ 0x02000007, { 101, 10 } },
	{ 0x02000008, { 113, 11 } },
	{ 0x02000009, { 127, 9 } },
	{ 0x0200000A, { 139, 12 } },
	{ 0x0200000B, { 154, 1 } },
	{ 0x0200000C, { 155, 2 } },
	{ 0x0200000D, { 157, 12 } },
	{ 0x0200000E, { 169, 11 } },
	{ 0x02000010, { 180, 8 } },
	{ 0x02000012, { 188, 3 } },
	{ 0x02000013, { 193, 5 } },
	{ 0x02000014, { 198, 7 } },
	{ 0x02000015, { 205, 3 } },
	{ 0x02000016, { 208, 7 } },
	{ 0x02000017, { 215, 4 } },
	{ 0x02000018, { 219, 21 } },
	{ 0x0200001A, { 240, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 3 } },
	{ 0x06000010, { 42, 2 } },
	{ 0x06000011, { 44, 4 } },
	{ 0x06000012, { 48, 3 } },
	{ 0x06000013, { 51, 4 } },
	{ 0x06000014, { 55, 3 } },
	{ 0x06000015, { 58, 3 } },
	{ 0x06000016, { 61, 1 } },
	{ 0x06000017, { 62, 3 } },
	{ 0x06000018, { 65, 2 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 2 } },
	{ 0x0600001B, { 72, 5 } },
	{ 0x0600002B, { 90, 2 } },
	{ 0x06000030, { 99, 2 } },
	{ 0x06000035, { 111, 2 } },
	{ 0x0600003B, { 124, 3 } },
	{ 0x06000040, { 136, 3 } },
	{ 0x06000045, { 151, 3 } },
	{ 0x06000067, { 191, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[242] = 
{
	{ (Il2CppRGCTXDataType)2, 1934 },
	{ (Il2CppRGCTXDataType)3, 8973 },
	{ (Il2CppRGCTXDataType)2, 3394 },
	{ (Il2CppRGCTXDataType)2, 2868 },
	{ (Il2CppRGCTXDataType)3, 17240 },
	{ (Il2CppRGCTXDataType)2, 2057 },
	{ (Il2CppRGCTXDataType)2, 2875 },
	{ (Il2CppRGCTXDataType)3, 17279 },
	{ (Il2CppRGCTXDataType)2, 2870 },
	{ (Il2CppRGCTXDataType)3, 17247 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)3, 8974 },
	{ (Il2CppRGCTXDataType)2, 3417 },
	{ (Il2CppRGCTXDataType)2, 2877 },
	{ (Il2CppRGCTXDataType)3, 17286 },
	{ (Il2CppRGCTXDataType)2, 2077 },
	{ (Il2CppRGCTXDataType)2, 2885 },
	{ (Il2CppRGCTXDataType)3, 17343 },
	{ (Il2CppRGCTXDataType)2, 2881 },
	{ (Il2CppRGCTXDataType)3, 17312 },
	{ (Il2CppRGCTXDataType)2, 679 },
	{ (Il2CppRGCTXDataType)3, 56 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)2, 1274 },
	{ (Il2CppRGCTXDataType)3, 6900 },
	{ (Il2CppRGCTXDataType)2, 680 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)3, 6904 },
	{ (Il2CppRGCTXDataType)3, 19693 },
	{ (Il2CppRGCTXDataType)2, 687 },
	{ (Il2CppRGCTXDataType)3, 119 },
	{ (Il2CppRGCTXDataType)2, 2490 },
	{ (Il2CppRGCTXDataType)3, 13451 },
	{ (Il2CppRGCTXDataType)3, 7678 },
	{ (Il2CppRGCTXDataType)3, 19662 },
	{ (Il2CppRGCTXDataType)2, 683 },
	{ (Il2CppRGCTXDataType)3, 79 },
	{ (Il2CppRGCTXDataType)2, 804 },
	{ (Il2CppRGCTXDataType)3, 1049 },
	{ (Il2CppRGCTXDataType)3, 1050 },
	{ (Il2CppRGCTXDataType)2, 2058 },
	{ (Il2CppRGCTXDataType)3, 9643 },
	{ (Il2CppRGCTXDataType)2, 1861 },
	{ (Il2CppRGCTXDataType)2, 1421 },
	{ (Il2CppRGCTXDataType)2, 1530 },
	{ (Il2CppRGCTXDataType)2, 1622 },
	{ (Il2CppRGCTXDataType)2, 1531 },
	{ (Il2CppRGCTXDataType)2, 1623 },
	{ (Il2CppRGCTXDataType)3, 6902 },
	{ (Il2CppRGCTXDataType)2, 1862 },
	{ (Il2CppRGCTXDataType)2, 1422 },
	{ (Il2CppRGCTXDataType)2, 1532 },
	{ (Il2CppRGCTXDataType)2, 1624 },
	{ (Il2CppRGCTXDataType)2, 1533 },
	{ (Il2CppRGCTXDataType)2, 1625 },
	{ (Il2CppRGCTXDataType)3, 6903 },
	{ (Il2CppRGCTXDataType)2, 1860 },
	{ (Il2CppRGCTXDataType)2, 1529 },
	{ (Il2CppRGCTXDataType)2, 1621 },
	{ (Il2CppRGCTXDataType)2, 1519 },
	{ (Il2CppRGCTXDataType)2, 1520 },
	{ (Il2CppRGCTXDataType)2, 1618 },
	{ (Il2CppRGCTXDataType)3, 6899 },
	{ (Il2CppRGCTXDataType)2, 1420 },
	{ (Il2CppRGCTXDataType)2, 1527 },
	{ (Il2CppRGCTXDataType)2, 1528 },
	{ (Il2CppRGCTXDataType)2, 1620 },
	{ (Il2CppRGCTXDataType)3, 6901 },
	{ (Il2CppRGCTXDataType)2, 1419 },
	{ (Il2CppRGCTXDataType)3, 19649 },
	{ (Il2CppRGCTXDataType)3, 6256 },
	{ (Il2CppRGCTXDataType)2, 1147 },
	{ (Il2CppRGCTXDataType)2, 1522 },
	{ (Il2CppRGCTXDataType)2, 1619 },
	{ (Il2CppRGCTXDataType)2, 1696 },
	{ (Il2CppRGCTXDataType)3, 8975 },
	{ (Il2CppRGCTXDataType)3, 8977 },
	{ (Il2CppRGCTXDataType)2, 474 },
	{ (Il2CppRGCTXDataType)3, 8976 },
	{ (Il2CppRGCTXDataType)3, 8985 },
	{ (Il2CppRGCTXDataType)2, 1938 },
	{ (Il2CppRGCTXDataType)2, 2871 },
	{ (Il2CppRGCTXDataType)3, 17248 },
	{ (Il2CppRGCTXDataType)3, 8986 },
	{ (Il2CppRGCTXDataType)2, 1575 },
	{ (Il2CppRGCTXDataType)2, 1649 },
	{ (Il2CppRGCTXDataType)3, 6911 },
	{ (Il2CppRGCTXDataType)3, 19635 },
	{ (Il2CppRGCTXDataType)2, 2882 },
	{ (Il2CppRGCTXDataType)3, 17313 },
	{ (Il2CppRGCTXDataType)3, 8978 },
	{ (Il2CppRGCTXDataType)2, 1937 },
	{ (Il2CppRGCTXDataType)2, 2869 },
	{ (Il2CppRGCTXDataType)3, 17241 },
	{ (Il2CppRGCTXDataType)3, 6910 },
	{ (Il2CppRGCTXDataType)3, 8979 },
	{ (Il2CppRGCTXDataType)3, 19634 },
	{ (Il2CppRGCTXDataType)2, 2878 },
	{ (Il2CppRGCTXDataType)3, 17287 },
	{ (Il2CppRGCTXDataType)3, 8992 },
	{ (Il2CppRGCTXDataType)2, 1939 },
	{ (Il2CppRGCTXDataType)2, 2876 },
	{ (Il2CppRGCTXDataType)3, 17280 },
	{ (Il2CppRGCTXDataType)3, 9695 },
	{ (Il2CppRGCTXDataType)3, 5301 },
	{ (Il2CppRGCTXDataType)3, 6912 },
	{ (Il2CppRGCTXDataType)3, 5300 },
	{ (Il2CppRGCTXDataType)3, 8993 },
	{ (Il2CppRGCTXDataType)3, 19636 },
	{ (Il2CppRGCTXDataType)2, 2886 },
	{ (Il2CppRGCTXDataType)3, 17344 },
	{ (Il2CppRGCTXDataType)3, 9006 },
	{ (Il2CppRGCTXDataType)2, 1941 },
	{ (Il2CppRGCTXDataType)2, 2884 },
	{ (Il2CppRGCTXDataType)3, 17315 },
	{ (Il2CppRGCTXDataType)3, 9007 },
	{ (Il2CppRGCTXDataType)2, 1578 },
	{ (Il2CppRGCTXDataType)2, 1652 },
	{ (Il2CppRGCTXDataType)3, 6916 },
	{ (Il2CppRGCTXDataType)3, 6915 },
	{ (Il2CppRGCTXDataType)2, 2873 },
	{ (Il2CppRGCTXDataType)3, 17250 },
	{ (Il2CppRGCTXDataType)3, 19643 },
	{ (Il2CppRGCTXDataType)2, 2883 },
	{ (Il2CppRGCTXDataType)3, 17314 },
	{ (Il2CppRGCTXDataType)3, 8999 },
	{ (Il2CppRGCTXDataType)2, 1940 },
	{ (Il2CppRGCTXDataType)2, 2880 },
	{ (Il2CppRGCTXDataType)3, 17289 },
	{ (Il2CppRGCTXDataType)3, 6914 },
	{ (Il2CppRGCTXDataType)3, 6913 },
	{ (Il2CppRGCTXDataType)3, 9000 },
	{ (Il2CppRGCTXDataType)2, 2872 },
	{ (Il2CppRGCTXDataType)3, 17249 },
	{ (Il2CppRGCTXDataType)3, 19642 },
	{ (Il2CppRGCTXDataType)2, 2879 },
	{ (Il2CppRGCTXDataType)3, 17288 },
	{ (Il2CppRGCTXDataType)3, 9013 },
	{ (Il2CppRGCTXDataType)2, 1942 },
	{ (Il2CppRGCTXDataType)2, 2888 },
	{ (Il2CppRGCTXDataType)3, 17346 },
	{ (Il2CppRGCTXDataType)3, 9696 },
	{ (Il2CppRGCTXDataType)3, 5303 },
	{ (Il2CppRGCTXDataType)3, 6918 },
	{ (Il2CppRGCTXDataType)3, 6917 },
	{ (Il2CppRGCTXDataType)3, 5302 },
	{ (Il2CppRGCTXDataType)3, 9014 },
	{ (Il2CppRGCTXDataType)2, 2874 },
	{ (Il2CppRGCTXDataType)3, 17251 },
	{ (Il2CppRGCTXDataType)3, 19644 },
	{ (Il2CppRGCTXDataType)2, 2887 },
	{ (Il2CppRGCTXDataType)3, 17345 },
	{ (Il2CppRGCTXDataType)3, 6907 },
	{ (Il2CppRGCTXDataType)3, 6908 },
	{ (Il2CppRGCTXDataType)3, 6919 },
	{ (Il2CppRGCTXDataType)3, 122 },
	{ (Il2CppRGCTXDataType)3, 121 },
	{ (Il2CppRGCTXDataType)2, 1570 },
	{ (Il2CppRGCTXDataType)2, 1645 },
	{ (Il2CppRGCTXDataType)3, 6909 },
	{ (Il2CppRGCTXDataType)2, 1585 },
	{ (Il2CppRGCTXDataType)2, 1664 },
	{ (Il2CppRGCTXDataType)3, 124 },
	{ (Il2CppRGCTXDataType)2, 612 },
	{ (Il2CppRGCTXDataType)2, 688 },
	{ (Il2CppRGCTXDataType)3, 120 },
	{ (Il2CppRGCTXDataType)3, 123 },
	{ (Il2CppRGCTXDataType)3, 81 },
	{ (Il2CppRGCTXDataType)2, 2590 },
	{ (Il2CppRGCTXDataType)3, 15037 },
	{ (Il2CppRGCTXDataType)2, 1567 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)3, 15038 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)2, 471 },
	{ (Il2CppRGCTXDataType)2, 684 },
	{ (Il2CppRGCTXDataType)3, 80 },
	{ (Il2CppRGCTXDataType)3, 82 },
	{ (Il2CppRGCTXDataType)3, 6292 },
	{ (Il2CppRGCTXDataType)2, 1162 },
	{ (Il2CppRGCTXDataType)2, 3508 },
	{ (Il2CppRGCTXDataType)3, 15034 },
	{ (Il2CppRGCTXDataType)3, 15035 },
	{ (Il2CppRGCTXDataType)2, 1710 },
	{ (Il2CppRGCTXDataType)3, 15036 },
	{ (Il2CppRGCTXDataType)2, 403 },
	{ (Il2CppRGCTXDataType)2, 685 },
	{ (Il2CppRGCTXDataType)3, 93 },
	{ (Il2CppRGCTXDataType)3, 13438 },
	{ (Il2CppRGCTXDataType)2, 2491 },
	{ (Il2CppRGCTXDataType)3, 13452 },
	{ (Il2CppRGCTXDataType)2, 805 },
	{ (Il2CppRGCTXDataType)3, 1051 },
	{ (Il2CppRGCTXDataType)3, 13444 },
	{ (Il2CppRGCTXDataType)3, 5274 },
	{ (Il2CppRGCTXDataType)2, 504 },
	{ (Il2CppRGCTXDataType)3, 13439 },
	{ (Il2CppRGCTXDataType)2, 2487 },
	{ (Il2CppRGCTXDataType)3, 1465 },
	{ (Il2CppRGCTXDataType)2, 824 },
	{ (Il2CppRGCTXDataType)2, 1122 },
	{ (Il2CppRGCTXDataType)3, 5280 },
	{ (Il2CppRGCTXDataType)3, 13440 },
	{ (Il2CppRGCTXDataType)3, 5269 },
	{ (Il2CppRGCTXDataType)3, 5270 },
	{ (Il2CppRGCTXDataType)3, 5268 },
	{ (Il2CppRGCTXDataType)3, 5271 },
	{ (Il2CppRGCTXDataType)2, 1118 },
	{ (Il2CppRGCTXDataType)2, 3468 },
	{ (Il2CppRGCTXDataType)3, 6906 },
	{ (Il2CppRGCTXDataType)3, 5273 },
	{ (Il2CppRGCTXDataType)2, 1501 },
	{ (Il2CppRGCTXDataType)3, 5272 },
	{ (Il2CppRGCTXDataType)2, 1423 },
	{ (Il2CppRGCTXDataType)2, 3421 },
	{ (Il2CppRGCTXDataType)2, 1546 },
	{ (Il2CppRGCTXDataType)2, 1626 },
	{ (Il2CppRGCTXDataType)3, 6275 },
	{ (Il2CppRGCTXDataType)2, 1156 },
	{ (Il2CppRGCTXDataType)3, 7537 },
	{ (Il2CppRGCTXDataType)3, 7538 },
	{ (Il2CppRGCTXDataType)3, 7543 },
	{ (Il2CppRGCTXDataType)2, 1705 },
	{ (Il2CppRGCTXDataType)3, 7540 },
	{ (Il2CppRGCTXDataType)3, 20059 },
	{ (Il2CppRGCTXDataType)2, 1124 },
	{ (Il2CppRGCTXDataType)3, 5294 },
	{ (Il2CppRGCTXDataType)1, 1498 },
	{ (Il2CppRGCTXDataType)2, 3433 },
	{ (Il2CppRGCTXDataType)3, 7539 },
	{ (Il2CppRGCTXDataType)1, 3433 },
	{ (Il2CppRGCTXDataType)1, 1705 },
	{ (Il2CppRGCTXDataType)2, 3506 },
	{ (Il2CppRGCTXDataType)2, 3433 },
	{ (Il2CppRGCTXDataType)3, 7544 },
	{ (Il2CppRGCTXDataType)3, 7542 },
	{ (Il2CppRGCTXDataType)3, 7541 },
	{ (Il2CppRGCTXDataType)2, 337 },
	{ (Il2CppRGCTXDataType)3, 5304 },
	{ (Il2CppRGCTXDataType)2, 484 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	151,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	50,
	s_rgctxIndices,
	242,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
