#include "fielder.h"


Fielder::Fielder(string name,int number)
{
    m_name = name;
    m_number = number;
    m_kind = "フィールドプレーヤー";
}
//  ピッチャーがプレイする
void Fielder::play()
{
    cout << "守る" << endl;
}
