#include <iostream>
using namespace std;

class student
{
  int sansu;
public:
  student(){}
  student(int x){set_sansu(x);}
  void set_sansu(int x);
  int get_sansu() const{return sansu;}
  void input();
};
void student::set_sansu(int x){
  if(x>=100){
    x=100;
  }
  sansu=x;
}

void student::input()
{
  int temp;
  cout<<"点数を入れてね"<<endl;
  cin>>temp;
  set_sansu(temp);
}

student mine[10];

int main()
{
  int sum=0;
  cout<<"10人の点数"<<endl;
  for (int i=0;i<10;i++){
    mine[i].input();
  }
  cout<<"average"<<endl;
  for (int i=0;i<10;i++){
    sum+=mine[i].get_sansu();
  }
  cout <<"average"<<sum/10<<endl;
}
