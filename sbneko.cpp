#include <iostream>
#include <string>
using namespace std;

class Neko
{
  string name;
public:
  Neko(string);
  void naku() const;
};

class SalaryNeko:public Neko
{
  int gekkyu;
public:
  SalaryNeko(string,int);
  int get_nensyu() const {return gekkyu*12;}
  void syoukyu(){gekkyu++;}
  int get_gekkyu() const {return gekkyu;}
};

class  SalaryNekoWithBonus :public SalaryNeko
{
  int bonus;
 public:
  SalaryNekoWithBonus(string ,int,int);
  int get_nensyu() const {return get_gekkyu()*(12+bonus);}
};

Neko::Neko(string s):name(s){}

void Neko::naku() const{
  cout<<"I'm"<<name<<endl;
}

SalaryNeko::SalaryNeko(string s,int x):Neko(s),gekkyu(x){}
SalaryNekoWithBonus::SalaryNekoWithBonus(string s,int g,int b):SalaryNeko(s,g),bonus(b){}

int main()
{
  string name;
  int gekkyu;
  int bonus;

  cout<<"名前をきめてね"<<endl;
  cin>>name;
  cout<<"月給を入れてね"<<endl;
  cin>>gekkyu;
  cout<<"bonusを入れてね"<<endl;
  cin>>bonus;
  SalaryNekoWithBonus dora(name,gekkyu,bonus);
  while(1){
    int ans;
    cout<<"1 なく2 年収3 昇級4 やめる"<<endl;
    cin>>ans;
    if(ans==1){
      dora.naku();
    }
    else if(ans==2){
      cout<<"年収は"<<dora.get_nensyu()<<endl;
    }
    else if(ans==3){
      dora.syoukyu();
    }
    else
      break;
    cout<<endl;
  }
  cout<<"end"<<endl;
}
