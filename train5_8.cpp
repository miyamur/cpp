#include <iostream>
#include <string>
#include <map>
#include <queue>

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
    queue <char> que;
    cout<<"整数の値を入力してください:";
    cin>>x;
    for(;cin.good()==0;){
      cin.clear();
      cin.ignore(256,'\n');
      cout<<"整数の値を入力してください";
      cin>>x;
    }
    string num=to_string(x);

    for(int i=0;i<num.length();i++){
      char str=num[i];
      que.push(str);
  }
    int k=que.size();
    int s=0;
    while(!que.empty()){
      for(int j=0;j<10;j++){
      if(names[j]==que.front()){
            cout <<number[names[j]];
      }
    }
      que.pop();
      if(!que.empty()&&(s-k+1)%3==0){
        cout<<",";
      }
      s++;

    }
    cout<< endl;
    return 0;
}
