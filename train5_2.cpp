#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map <char, string> number;  // map のデータ構造を用意する。
    char names[] = { '0','1','2','3','4','5','6','7','8','9'};
    number[names[0]] = "〇";          //  キーと値の関連付け① Tom : 100
    number[names[1]] = "一";           //  キーと値の関連付け② Bob : 80
    number[names[2]] = "二";
    number[names[3]] = "三";
    number[names[4]] = "四";          //  キーと値の関連付け① Tom : 100
    number[names[5]] = "五";           //  キーと値の関連付け② Bob : 80
    number[names[6]] = "六";
    number[names[7]] = "七";
    number[names[8]] = "八";          //  キーと値の関連付け① Tom : 100
    number[names[9]] = "九";           //  キーと値の関連付け② Bob : 80

    int x;
    cout<<"整数の値を入力してください:";
    cin>>x;
    for(;cin.good()==0;){
      cin.clear();
      cin.ignore(256,'\n');
      cout<<"整数の値を入力してください";
      cin>>x;
    }
    string suuji;
    suuji=to_string(x);
    int k =suuji.length()%3;

    for(int i = 0; i<suuji.length(); i++){
      char str=suuji[i];
      for(int j=0;j<10;j++)
      if(names[j]==str){
            cout <<number[names[j]];
      }
      if(i!=suuji.length()-1&&(i-k+1)%3==0){
        cout<<",";
      }
    }
    cout<< endl;
    return 0;
}
