#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    stack<string> stk;
    string x;
    while(1){
      cout<<"文字列を入力";
      getline(cin,x);
      if(x==""){
        break;
      }
      stk.push(x);
    }

    while (!stk.empty()) {
        // frontで要素を取得し、popでその要素をqueから取り除く(2段階の作業が必要)
        cout << stk.top() << endl;
        stk.pop();
    }
    cout << endl;
    return 0;
}
