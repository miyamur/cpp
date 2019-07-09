#ifndef _PLANE_H_
#define _PLANE_H_

#include <iostream>
#include <string>

using namespace std;

//  戦闘機クラス
class AirPlane{
protected:
    string m_type;
public:
    //  コンストラクタ
  //  FighterAiracraft();
    //  タイプの取得
    string getType(){return m_type;}
    //  飛行する
    virtual void fly()=0;
    //  戦闘する
    //virtual void fight()=0;
};

#endif // _PLANE_H_
