#include <iostream>
#include <string>
#include <map>
#include<queue>
#include <list>

using namespace std;

int main() {
    map <char, string> number;
    map <char,string> number1;
    queue <string> que; // map のデータ構造を用意する。

    string x;
    int tem;
    cout<<"しりとりしたい単語の数を入力してください:";
    cin>>tem;
    cout<<"しりとりしたい単語を入力してください:";  
    for(int i=0;i<tem;i++){
      cin>>x;
      que.push(x);
    }

    int k=que.size();
    char names[k] ;
    char names1[k];
    string y;
    char z;
    char v;
    int a=0;
    while(!que.empty()){
      y=que.front();
      z=y[0];
      v=y[y.length()-1];
      names[a]=z;
      names1[a]=v;
      number[names[a]]=y;
      number1[names1[a]]=y;
      que.pop();
      a++;
    }
    list<string> lst;
    y=number[names[0]];
    lst.push_back(y);
    z=y[y.length()-1];
    v=y[0];
    map<char,string>::iterator it;
    while(1){
    it =  number.find(z);
    if(it == number.end()){
        break;;
    }else{
        lst.push_back(it->second);
    }
    y=it->second;
    z=y[y.length()-1];
}
    while(1){
    it =  number1.find(v);
    if(it == number1.end()){
      break;;
    }else{
      lst.push_front(it->second);
    }
    y=it->second;
    v=y[0];

  }
  list<string>::iterator i1;
  for (i1 = lst.begin(); i1 != lst.end(); i1++){
    cout << *i1 << endl;
}
    return 0;
}
