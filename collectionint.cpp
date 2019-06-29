#include "collectionint.h"
#include <iostream>

using namespace std;

template<typename T>
//  コンストラクタ
CollectionInt<T>::CollectionInt(T* array,int length)
{
    m_pArray = new T[length];
    m_length = length;
    for(int i = 0; i < m_length ; i++){
        m_pArray[i] = array[i];
    }
}
template CollectionInt<int>::CollectionInt(int* array,int length);
//  デストラクタ
template<typename T>
CollectionInt<T>::~CollectionInt()
{
    delete[] m_pArray;
}
template CollectionInt<int>::~CollectionInt();

template<typename T>
T CollectionInt<T>::getMax()
{
    T max = m_pArray[0];
    for(int i = 0; i < m_length ; i++){
        if(max < m_pArray[i]){
            max = m_pArray[i];
        }
    }
    return max;
}
template int CollectionInt<int>::getMax();

template<typename T>
T CollectionInt<T>::getMin()
{
    T min = m_pArray[0];
    for(int i = 0; i < m_length ; i++){
        if(min > m_pArray[i]){
            min = m_pArray[i];
        }
    }
    return min;
}
template int CollectionInt<int>::getMin();

template<typename T>
void CollectionInt<T>::showArray(){
    for(int i = 0; i < m_length ; i++){
        cout << m_pArray[i] << " ";
    }
    cout << endl;
}
template void CollectionInt<int>::showArray();
