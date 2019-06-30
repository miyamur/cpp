#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> li;
    int x;
    while(1){
      cout<<"正の整数を入力:";
      cin>>x;
      if(x==-1){
        break;
      }
      li.push_back(x);
    }
    list<int>::iterator itr;
    itr=li.begin();
    li.remove(2);
    for(itr = li.begin();itr!=li.end();itr++){
      cout << *itr << " ";
    }

    cout << endl;
    return 0;
}
