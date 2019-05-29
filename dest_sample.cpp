#include <iostream>
using namespace std;

class Nanika{
  int datum;
public:

  Nanika():datum(0){
    cout<<"インスタンス"<<datum<<"が生成されました"<<endl;
  }
    Nanika(int x):datum(x){
    cout<<"インスタンス"<<datum<<"が生成されました"<<endl;
  }
  void func() const{
    cout<<"インスタンス"<<datum<<"の関数が呼ばました"<<endl;
}
  ~Nanika(){
    cout<<"インスタンス"<<datum<<"が消滅しました"<<endl;
  }
};

int main()
{
 Nanika *p;
 cout<<"nanikaのオブジェクトを生成"<<endl;
 p=new Nanika(1);
 p->func(); 
 delete p;
 }
