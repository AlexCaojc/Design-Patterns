#ifndef ADAPTER_H
#define ADAPTER_H

/**!
 * 适配器模式（Adapter Pattern）是一种补救模式，将一个类的接口转换成客户希望的另外一个接口，
 * 从而使原本由于接口不兼容而不能一起工作的类可以一起工作。
 *
 !**/





#include "target.h"
#include "adaptee.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

///定义一个电源适配器，并使用我们自带的充电器充电
/// 电源适配器,（对象适配器）
class PowerAdapter : public IRussiaSocket
{
public:
    PowerAdapter() : m_pCharger(new OwnCharger()){}
    ~PowerAdapter() {
        SAFE_DELETE(m_pCharger);
    }
    void Charge() {
        //  使用自带的充电器（两脚扁型）充电
        m_pCharger->ChargeWithFeetFlat();
    }

private:
    OwnCharger *m_pCharger;  // 持有需要被适配的接口对象 - 自带的充电器
};

#endif // ADAPTER_H
