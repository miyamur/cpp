#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    queue<string> que;
    string x;
    while(1){
      cout<<"文字列を入力";
      getline(cin,x);
      if(x==""){
        break;
      }
      que.push(x);
    }

    while (!que.empty()) {
        // frontで要素を取得し、popでその要素をqueから取り除く(2段階の作業が必要)
        cout << que.front() << endl;
        que.pop();
    }
    cout << endl;
    return 0;
}
