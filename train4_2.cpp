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

    int max=0;
    int min=v1[0];
    cout<<"最大値 :"<<" ";
    for (int i = 0; i < v1.size(); i++)
    {
        if(max<v1[i]){
          max=v1[i];
        }
    }
    cout<< max << endl;
    cout<<"最小値 :"<<" ";
    for (int i = 0; i < v1.size(); i++)
    {
        if(min>v1[i]){
          min=v1[i];
        }
    }
    cout<< min <<endl;
    return 0;
}
//</string></int>
