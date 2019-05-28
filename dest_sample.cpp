#include <iostream>
using namespace std;

class Nanika{
  int datum;
public:
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
 Nanika One(1),Two(2);
 
 One.func();
 Two.func();
 }
