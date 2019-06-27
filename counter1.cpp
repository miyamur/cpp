#include "counter1.h"

//  コンストラクタ
Counter1::Counter1() : m_count(0)
{

}
//  カウンタをリセット
void Counter1::reset()
{
    m_count = 0;
}
//  回数を取得
int Counter1::getCount()
{
    return m_count;
}
//  1ずつカウント
void Counter1::count()
{
    m_count++;
}

void Counter1::count(int x)
{
    m_count+=x;
}
