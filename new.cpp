#include <iostream>
using namespace std;


class Hito{
  int power;
public:
  Hito(int x):power(x){}
  virtual ~Hito(){};
  void set_power(int x){power=x;}
  int get_power() const {return power;}
  virtual void Jikosyoukai();

};

class Samurai:public Hito
{
public:
  Samurai(int x):Hito(x){}
  void Jikosyoukai();

};

class Ninja:public Hito
{
public:
  Ninja (int x ):Hito(x){}
  void Jikosyoukai();

};

class Matimusume:public Hito
{
public:
  Matimusume(int x):Hito(x){}
  void Jikosyoukai();

};

void Hito::Jikosyoukai()
{
  power--;
  cout<<"俺は人だ"<<endl;
  cout<<power<<endl;
}

void Samurai::Jikosyoukai()
{
  set_power(get_power()-1);
  cout<<"俺は侍"<<endl;
  
}

void Ninja::Jikosyoukai()
{
  set_power(get_power()-1);
  cout<<"忍者"<<endl;
}

void Matimusume::Jikosyoukai()
{
  set_power(get_power()-1);
  cout<<"町娘"<<endl;
}

int main()
{
  Hito One (10);
  Samurai Two(20);
  Ninja Three(3);
  Matimusume Four(4);

  Hito *p;

  p=&One;
  p->Jikosyoukai();
  p=&Two;
  p->Jikosyoukai();
  p=&Three;
  p->Jikosyoukai();
  p=&Four;
  p->Jikosyoukai();

}
