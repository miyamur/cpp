#ifndef _COUNTER1_H_
#define _COUNTER1_H_

//  カウンタークラス
class Counter1{
private:
    //  カウント
    int m_count;
public:
    //  コンストラクタ
    Counter1();
    //  カウンタをリセット
    void reset();
    //  カウントされた回数を取得
    int getCount();
    //  1ずつカウント
    void count();

    void count(int);
};

#endif // _COUNTER1_H_
