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
  cout<<get_power()<<endl;

}

void Ninja::Jikosyoukai()
{
  set_power(get_power()-1);
  cout<<"忍者"<<endl;
  cout<<get_power()<<endl;
}

void Matimusume::Jikosyoukai()
{
  set_power(get_power()-1);
  cout<<"町娘"<<endl;
  cout<<get_power()<<endl;
}

int main()
{
  Hito *x[5];
  int temp,power;

cout<<"データを入れてね"<<endl;
for (int i=0;i<5;i++)
{
  cout<<"選んでね"<<endl;
  cout<<"1侍　2忍者　3町娘"<<endl;
  cin>>temp;
  cout<<"power"<<endl;
  cin>>power;
  switch(temp){
    case 1:
    x[i]=new Samurai(power);
    break;
    case 2:
    x[i]=new Ninja(power);
    break;
    case 3:
    x[i]=new Matimusume(power);
    break;
  }

  }
  cout<<"自己紹介します"<<endl;
  cout<<"1はい 2いいえ"<<endl;
  cin>>temp;
  if(temp!=1){
    return 0;
  }
  for (int i=0;i<5;i++)
  {
    x[i]->Jikosyoukai();
  }
  int sum=0;
  for(int i=0;i<5;i++)
  {
    sum+=x[i]->get_power();
  }
  cout<<sum<<endl;
  for(int i=0;i<5;i++){
  delete x[i];
}

}
