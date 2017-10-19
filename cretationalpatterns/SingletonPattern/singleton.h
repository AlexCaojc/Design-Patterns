#ifndef SINGLETON_H
#define SINGLETON_H

#include <QObject>

//using namespace std;
//#include "bits/c++config.h"

/*
 * 局部静态变量方式，非真正意义上的单例，当使用如下方式访问单例时：
 * Singleton single = Singleton::GetInstance();
 * 这会出现了一个类拷贝问题，从而违背了单例的特性。产生这个问题原因在于：编译器会生成一个默认的拷贝构造函数，来支持类的拷贝
*/

#if 0
class CSingleton
{

private:
    CSingleton() {}

public:
    static CSingleton &instance()
    {
        static CSingleton singleton;
        return singleton;
    }
};
#endif




/*
 * 为了避免这个问题，有两种解决方式：
 * 将 instance() 函数的返回类型修改为指针，而非引用。
 * 显式地声明类的拷贝构造函数，并重载赋值运算符。
*/

/* 修改返回类型为指针类型*/
#if 0
class CSignleton
{
private:
    CSignleton() {}

public:
    static CSignleton *instance()
    {
#if 0
        static CSignleton instance;//静态区直接存放单例对象
        return &instance;
#endif
        static CSignleton *instance = new CSignleton();//静态区存放的是单例对象的地址
        return instance;
    }
};
#endif

/*显式地声明类的拷贝构造函数，并重载赋值运算符*/

#if 0
class CSignleton
{
private:
    CSignleton() {}
    CSignleton(const CSignleton&);// 无需实现
    operator =(const CSignleton&);// 无需实现

public:
    static CSignleton &instance()
    {
        static CSignleton instance;
        return instance;
    }

    void doSomething()
    {

    }
};
#endif

class CSignleton
{
public:
    CSignleton() {}
};
#endif // SINGLETON_H
