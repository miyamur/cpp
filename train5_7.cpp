#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> stk;
    string x;
    cout<<"文字列を入力";
    getline(cin,x);
    for(int i=0;i<x.length();i++){
      char str=x[i];
      stk.push(str);
    }


    while (!stk.empty()) {
        // frontで要素を取得し、popでその要素をqueから取り除く(2段階の作業が必要)
        cout << stk.top() ;
        stk.pop();
    }
    cout << endl;
    return 0;
}
