#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map <string, string> animal;  // map のデータ構造を用意する。
    string names[] = { "cat","dog","bird","tiger"};
    animal[names[0]] = "猫";          //  キーと値の関連付け① Tom : 100
    animal[names[1]] = "犬";           //  キーと値の関連付け② Bob : 80
    animal[names[2]] = "鳥";
    animal[names[3]] = "トラ";
    string x;     //  キーと値の関連付け③ Mike : 120
    cout<<"整数の値を入力してください:";
    readline(cin.x);
    for(int i = 0; i < 4; i++){
        if(names[i]==x){
            cout <<animal[names[i]] <<"です．" << endl;
            return 0;}
    }
    cout<<"対応するデータは登録されていません" << endl;
    return 0;
}
