#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>
#include <qglobal.h>

using namespace std;

// 自带的充电器 - 两脚扁型
class OwnCharger
{
public:
    void ChargeWithFeetFlat() {
        cout << "OwnCharger::ChargeWithFeetFlat" << endl;
    }
};

#endif // ADAPTEE_H
