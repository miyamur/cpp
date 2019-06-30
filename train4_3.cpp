#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> v1;
    int x;
    while(1){
    cout<<"正の整数を入力 :";
    cin>>x;
    if(x==-1)
    {
      break;
    }
      v1.push_back(x);
    }
    bool flag=true;
    for(int j=0;j<10;j++){
          cout<<"一の位が"<<j<<": ";
          for(int i=0;i<v1.size();i++) {
            if(v1[i]%10==j){
              cout<<v1[i]<<" ";
              flag=false;
            }
          }
          if(flag==true){
            cout<<"なし";
          }
          flag=true;
          cout<<endl;
    }

    return 0;
}
//</string></int>
