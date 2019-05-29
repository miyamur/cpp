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

Neko::Neko(string s):name(s){}

void Neko::naku()const{
  cout<<"I'm"<<name<<endl;
}

int main(){
  Neko dora("ボス");
  Neko* pcat;

  pcat=&dora;
  dora.naku();
  pcat->naku();
}
