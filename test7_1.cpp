#include <iostream>
#include "counter1.h"

using namespace std;

int main(){
    //  カウンタを生成
    Counter1* pC = new Counter1();
    pC->count(); //  １回カウント
    pC->count(); //  １回カウント
    cout << "回数:" << pC->getCount() << "回" << endl;
    pC->count(4);    //  ４回カウント
    cout << "回数:" << pC->getCount() << "回" << endl;
    //  カウンタをリセット
    pC->reset();
    cout << "回数:" << pC->getCount() << "回" << endl;
    //  カウンタを消去
    delete pC;
    return 0;
}
