#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class jimbutu
{
  int power;
public:
  jimbutu():power(10){}
  int get_power() const {return power;}
  void decr_power(){
    power--;
    cout <<"power"<<power<<endl;
  }
};

class Kensi: public jimbutu
{
public:
  void sigoto();
};

void Kensi::sigoto()
{
  if (get_power()<=0){
    cout<<"tired"<<endl;
    return;
  }
  cout <<"剣士"<<endl;
  decr_power();
}

class Uranaisi:public jimbutu
{
public:
    void sigoto();
};

void Uranaisi::sigoto()
{
  if(get_power()<=0){
    cout<<"uranaisi"<<endl;
    return;
  }
  cout<<"uranaisi"<<endl;
  int x =rand()%3;
  if (x==0){
    cout<<"lucky"<<endl;
  }
  else if (x==1){
    cout<<"hutuuu"<<endl;
  }
  else if (x==2){
    cout<<"zannen"<<endl;
  }
  decr_power();
}

int main()
{
  srand ((unsigned)time(NULL));
  Kensi hero;
  Uranaisi pero;
  while(1){
    int x;
    cout<<"what to do?"<<endl;
    cout<<"1 kensi 2 uranaisi 3 end"<<endl;
    cin>>x;
    if (x==1){
      hero.sigoto();
    }
    else if (x==2){
      pero.sigoto();
    }
    else {
      break;
    }
  }cout<<"end"<<endl;
}
