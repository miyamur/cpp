#include <iostream>
#include <string>
#include <set>
#include <cstdlib>

using namespace std;

int main() {
    set<int> names;
    int i;
    int x;
    cout<<"乱数";
    for(i = 0; i < 10;i++){
      x=rand()%10;
      cout<<x<<" ";
      names.insert(x);
    }
    cout<<endl;
    cout<<"出現した数";
    set<int>::iterator it;
    for(it = names.begin() ; it != names.end(); it++){
      cout << *it <<" ";
    }
    cout<<endl;
    return 0;
}
