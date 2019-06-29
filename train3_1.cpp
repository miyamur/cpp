#include <iostream>
#include <string>

using namespace std;

template <typename T>
T max(T x,T y){
  if(x>y){
    return x;
  }
  return y;
}
/*
//  整数値を比較し、大きいほうを返す関数
int max(int,int);
//  実数を比較し、大きいほうを返す関数
double max(double,double);
//  文字列をｈ各紙、大きいほうを返す巻子
string max(string,string);
*/
int main(){
    cout << ::max(1,2) << endl;
    cout << ::max<double>(1.75,3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << ::max<string>(s1,s2) << endl;
    return 0;
}

/*int max(int a,int b)
{
    if(a > b){
        return a;
    }
    return b;
}
double max(double a,double b)
{
    if(a > b){
        return a;
    }
    return b;
}
string max(string a,string b)
{
    if(a > b){
        return a;
    }
    return b;
}
*/
