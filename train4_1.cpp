#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    int x;
    while(1){
    cout<<"正の整数を入力 :";
    cin>>x;
    if(x==-1)
    {
      break;
    }
    else if(x%2==0){
      v1.push_back(x);
    }
    else if(x%2==1){
      v2.push_back(x);
    }
    }
    int i;
    cout<<"偶数"<<" ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] <<" ";
    }
    cout<<endl;
    cout<<"奇数"<<" ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] <<" ";
    }
    cout<<endl;
    return 0;
}
//</string></int>
