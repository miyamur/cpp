#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> v1;
    string x;
    while(1){
      cout<<"文字列を入力 :";
      getline(cin,x);
      if(x==""){
        break;
      }
      v1.push_back(x);
    }
    vector<string> max;
    vector<string> min;
    max.push_back(v1[0]);
    min.push_back(v1[0]);
    for (int i=1;i<v1.size();i++){
      if(v1[i].length()==max[0].length()){
        max.push_back(v1[i]);
      }
      else if(v1[i].length()>max[0].length()){
        max.clear();
        max.push_back(v1[i]);
      }
    }
    cout<<"最長の単語";
    for (int i=0;i<max.size();i++){
      cout<<max[i]<<" ";
    }
    cout<<endl;

    for (int i=1;i<v1.size();i++){
      if(v1[i].length()==min[0].length()){
        min.push_back(v1[i]);
      }
      else if(v1[i].length()<min[0].length()){
        min.clear();
        min.push_back(v1[i]);
      }
    }
    cout<<"最短の単語";
    for (int i=0;i<min.size();i++){
      cout<<min[i]<<" ";
    }
    cout<<endl;

    return 0;
}
