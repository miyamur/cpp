#include <iostream>
#include <string>
#include <set>
#include <cstdlib>

using namespace std;

int main() {
    set<char> names;
    int i;
    string x;
    cout<<"英語を入力:";
    cin>>x;
    for (i=0;i<x.length();i++){
      char str=x[i];
      names.insert(str);
    }

    cout<<"出現したアルファベット";
    set<char>::iterator it;
    for(it = names.begin() ; it != names.end(); it++){
      cout << *it <<" ";
    }
    cout<<endl;
    return 0;
}
