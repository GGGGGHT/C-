# 动态数组

`new`与`delete`运算符一次只能分配/释放一个对象,但某些应用需要一次为很多对象分配内存.
C++提供了两种一次分配一个对象数组的方式
1. 使用new表达式语法 可以分配并初始化一个对象数组
2. 使用allocator 可以将分配和初始化分离 使用allocator通常会提供更好的性能和更灵活的内存管理能力

大多数应用应该使用标准库容器而不是动态分配的数组。使用容器更为简单、更不容易出现内存管理错误并且可能有更好的性能。

##　使用new分配一个对象数组
```c++
// pia指向第一个int
int *pia = new int[get_size()];
```

分配一个数组会得到一个元素类型的`指针`
由于分配的内存并不是一个数组类型,因此不能对动态数组调用begin,end,也不能用范围for语句来处理动态数组中的元素

##　使用delete释放动态数组
```c++
 delete [] p; 
```
当我们释放一个指向数组的指针时,空方括号对是必须的!
p必须指向一个动态分配的数组或为空 数组中的元素按逆序销毁,即最后一个元素首先被销毁.

智能指针与动态数组相结合:
```c++
unique_ptr<int[]> up(new int[10]);
up.release(); // 由于up指向一个数组，当up销毁它管理的指针时，会自动使用delete[]。

shared_ptr<int> sp(new int[10], [](int *o) {delete[] p;});
```


## 使用allocator
标准库allocator类定义在头文件memory中，它将内存分配和对象构造分离开来。提供一种类型感知的内存分配方法，它分配的内存是原始的、未构造的


```c++
allocator<string> alloc; // 可以分配string的allocator对象
auto const p = alloc.allocate(n); // 分配n个未初始化的string
```