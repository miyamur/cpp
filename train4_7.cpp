#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
    list<string> l;
    list<string> dust;
    list<string>::iterator i2;
    list<string>::iterator i1;
    string x;
    while(1){
      cout<<"文字列を入力";
      getline(cin,x);
      if(x==""){
        break;
      }
      l.push_back(x);
    }
    for (i2 = l.begin(); i2 != l.end(); i2++){
      if(i2->length()>4){
        dust.push_back(*i2);
      }
    }
    for (i1 = dust.begin(); i1 != dust.end(); i1++){
      l.remove(*i1);
    }


    for (i2 = l.begin(); i2 != l.end(); i2++){
      cout << *i2 <<" ";
    }
    cout<<endl;
}
