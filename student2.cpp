#include<iostream>
using namespace std;

class student
{
  int sansu;
public:
  student(){}
  student(int x){set_sansu(x);}
  void  set_sansu(int x);
  int get_sansu() const{return sansu;}
  void input();
};

void student::set_sansu(int x){
  if(x>100){
    x=100;
  }
  sansu=x;
}

void student::input()
{
  int temp;
  cout<<"点数を入れてください"<<endl;
  cin>>temp;
  set_sansu(temp);
}

int main()
{
  int ninzu,sum=0;
  student *pm;
  cout<<"学生の人数"<<endl;
  cin>>ninzu;
  pm=new student[ninzu];
  cout<<ninzu<<"人の点数"<<endl;
  for (int i=0;i<ninzu;i++){
    pm[i].input();
  }
  cout <<"平均の計算"<<endl;
  for(int i=0;i<ninzu;i++){
    sum+=pm[i].get_sansu();
  }
  cout<<"平均は"<<sum/ninzu<<endl;
  delete [] pm;
}
