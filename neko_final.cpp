#include <iostream>
#include <string>
using namespace std;

class Neko
{
  string name;
public:
  Neko(string);
  virtual ~Neko(){}
void naku() const;
virtual int get_nensyu() const=0;
};

class SalaryNeko:public  Neko
{
  int gekkyu;
public:
  SalaryNeko(string,int);
  int get_nensyu() const {return gekkyu*12;}
  void syoukyu(){gekkyu++;}
  int get_gekkyu() const {return gekkyu;}
};

class SalaryNekoWithBonus:public SalaryNeko
{
  int bonus;
public:
  SalaryNekoWithBonus(string,int,int);
  int get_nensyu() const {return get_gekkyu()*(12+bonus);}

};

class SisankaNeko:public Neko
{
  int sisan;
public:
  SisankaNeko(string,int);
  int get_nensyu() const {return sisan*2/100;}

};

Neko::Neko(string s):name(s){}

void Neko::naku() const{
  cout<<"俺は"<<name<<"だ"<<endl;
}
SalaryNeko::SalaryNeko(string s,int x):Neko(s),gekkyu(x){}

SalaryNekoWithBonus::SalaryNekoWithBonus(string s, int g,int b):SalaryNeko(s,g),bonus(b){}

SisankaNeko::SisankaNeko(string n,int s):Neko(n),sisan(s){}


int main()
{
  int syurui;
  string name;
  int gekkyu;
  int bonus;
  int sisan;

  Neko *cat[5];

  cout<<"5ひきの名前を入れよう"<<endl;
  for (int i=0;i<5;i++)
  {
    cout<<"job"<<endl;
    cout<<"1no bonus  2bonus 3sisan"<<endl;
    cin>>syurui;
    cout<<"name"<<endl;
    cin>>name;
    switch(syurui)
    {
      case 1:
      cout<<"月給を入れてね"<<endl;
      cin>>gekkyu;
      cat[i]=new SalaryNeko(name,gekkyu);
      break;

      case 2:
      cout <<"月給を入れてね"<<endl;
      cin>>gekkyu;
      cout<<"bonusの額は"<<endl;
      cin>>bonus;
      cat[i]=new SalaryNekoWithBonus(name,gekkyu,bonus);
      break;

      case 3:
      cout<<"資産を入れてね"<<endl;
      cin>>sisan;
      cat[i]=new SisankaNeko(name,sisan);
      break;
    }
  }

cout<<"自己紹介します"<<endl;
cout<<"1 yes 2 no"<<endl;
cin>>syurui;
if(syurui!=1)return 0;

for (int i=0;i<5;i++){
  cat[i]->naku();
  cout<<"年収"<<cat[i]->get_nensyu()<<"万円"<<endl;

}
for (int i=0;i<5;i++)
{
  delete cat[i];
}
  cout << "おしまい" << endl;
}
