#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Hero
{
  int power;
public:
  Hero():power(100){}
  int getpower(){return power;}
  void kougeki_suru(int n);
  void kougeki_sareru(int n);
};

void Hero::kougeki_suru(int n)
{
  cout<<"どかーん"<<endl;
  power-=n;

  if(power>=0){
    cout<<"現在のパワー"<<power<<endl;
  }
  else{
    cout<<"makeru"<<endl;
  }
}

void Hero::kougeki_sareru(int n){
  cout<<"攻撃される"<<endl;
  power-=n;
  if(power>=0){
    cout<<"現在のパワー"<<power<<endl;
  }
  else{
    cout<<"makeru"<<endl;
  }
}

class Daimao
{
  int power;
public:
  Daimao():power(100){}
  int getpower(){return power;}
  void kougeki_suru(int n);
  void kougeki_sareru(int n);
};

void Daimao::kougeki_suru(int n)
{
  cout<<"どかーん"<<endl;
  power-=n;

  if(power<0){
    cout<<"makeru"<<endl;
  }
}

void Daimao::kougeki_sareru(int n){
  cout<<"攻撃される"<<endl;
  power-=n;
  if (power<0){
    cout<<"makeru"<<endl;
  }
}
