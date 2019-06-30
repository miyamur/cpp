#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> li;
    int x;
    list<int>::iterator itr;
    while(1){
      cout<<"正の整数を入力:";
      cin>>x;
      if(x==-1){
        break;
      }
      itr=li.end();
      itr--;
      if(*itr<x){
        li.push_back(x);
      }
      else {
      for(itr = li.begin();itr!=li.end();itr++){
        if(*itr>x){
          li.insert(itr,x);
          break;
        }
      }
    }

      for(itr = li.begin();itr!=li.end();itr++){
        cout << *itr << " ";
      }
      cout<<endl;


    }
    cout << endl;
    return 0;
}
