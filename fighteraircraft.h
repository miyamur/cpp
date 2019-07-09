#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_

#include <iostream>
#include <string>
#include "plane.h"

using namespace std;

//  戦闘機クラス
class FighterAircraft:public AirPlane{
//private:
  //  string m_type;
public:
    //  コンストラクタ
    FighterAircraft();
    //  タイプの取得
  //  string getType();
    //  飛行する
    void fly();
    //  戦闘する
    void fight();
};

#endif // _FIGHTERAIRCRAFT_H_
