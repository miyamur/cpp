#include <iostream>
#include <string>
using namespace std;

class Aru{
  int data;
public:
  Aru(int d):data(d){}
  int get_data() const {return data;}
};

class Betu
{
  Aru *a;
public:
  Betu();
  ~Betu();
  Betu(const Betu&);
  Betu& operator=(const Betu&);
  void input();
  void show() const;
int get_data() const{return a->get_data();}

};

Betu::Betu():a(0){}

Betu::~Betu(){
  delete a;
}

Betu::Betu(const Betu& x){
  a=new Aru(x.get_data());
}

Betu& Betu::operator={const betu% x){
  if(this==&x)return *this;
  delete a;
  a=new Aru(x.get_data());
  return *this;
}

void Betu::input(){
  int d;
  delete a;
  cout<<"整数を入れてください"<<endl;
  cin>>d;
  a=new Aru(d);
}

void Betu::show() const{
  if(a==0)return;
  cout<<"データ"<<a->get_data()<<endl;
}

int main()
{
  Betu one;
  one.input();
  one.show();
}
