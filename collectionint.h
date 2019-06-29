#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

template<typename T> class CollectionInt{
private:
    //  配列データ
    T* m_pArray;
    //  配列の長さ
    int m_length;
public:
    //  コンストラクタ
    CollectionInt(T* array,int length);
    //  デストラクタ
    ~CollectionInt();
    //  最大値の取得
    T getMax();
    //  最小値の取得
    T getMin();
    //  成分の表示
    void showArray();

};

#endif // _COLLECTIONINT_H_
