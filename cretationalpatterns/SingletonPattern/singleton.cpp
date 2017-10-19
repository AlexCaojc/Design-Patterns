#include "singleton.h"


/*
 * 懒汉式
 * 特点：Lazy初始化
 *      非多线程安全
 * 优点：第一次调用时才初始化，避免内存浪费
 * 缺点：必须加锁才能保证单例，但加锁会影响效率
*/

#if 0
CSingleton * CSingleton::m_instance = Q_NULLPTR;

CSingleton *CSingleton::instance()
{
    if (!m_instance)
    {
        m_instance = new CSingleton();
    }

    return m_instance;
}

#endif

/*
 * 饿汉式
 * 特点：非Lazy初始化，执行效率会提高
 * 缺点：加载时就初始化，浪费内存
*/

#if 0
CSingleton * CSingleton::m_instance = new CSingleton();
CSingleton *CSingleton::instance()
{
    return m_instance;
}

#endif
