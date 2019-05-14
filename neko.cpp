#include <iostream>
#include <string>
using namespace std;

class Neko
{
  string name;
public:
  Neko(string s);
void naku() const;
};
Neko::Neko(string s):name(s){}
void Neko::naku() const{
  cout<<"俺は"<<name<<"だ"<<endl;
}

class SalaryNeko:public  Neko
{
  int gekkyu;
public:
  SalaryNeko(string s,int x):Neko(s),gekkyu(x){}
  int get_nensyu() const {return gekkyu*12;}
  void syoukyu(){gekkyu++;}
};

int main()
{
  cout<<"名前を入れよう"<<endl;
  string temp;
  cin>>temp;
  cout<<"お金を入れよう"<<endl;
  int syoninkyu;
  cin>>syoninkyu;
  SalaryNeko dora(temp,syoninkyu);
  while(1){
    cout << "どうしますか？" << endl;
    cout << "1．鳴かす　2．年収を表示　3．昇給　4．やめる" << endl;
    int ans;
    cin >> ans;
    if(ans == 1){  
      dora.naku();
     }
    else if(ans == 2){ 
      cout << "年収は現在" << dora.get_nensyu() << "です。" << endl;
    }
    else if(ans == 3){  
      dora.syoukyu();
      cout << "１万円昇給しました。" << endl;
    }
    else{   
      break;
    }
    cout << endl;
  }
  cout << "おしまい" << endl;
}
