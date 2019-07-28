#include "NewString.h"

//  コンストラクタ
NewString::NewString()
{
    m_value = "";
}
//  値を代入するコンストラクタ①（文字列から）
NewString::NewString(string value)
{
    m_value = value;
}
//  値を代入するコンストラクタ②（他のクラスから)
NewString::NewString(NewString& value)
{
    m_value = value.getValue();
}
//  値を代入
NewString& NewString::operator= (NewString& n)
{
    m_value = n.getValue();
    return *this;
}
bool operator== (NewString& n1,NewString& n2)
{
  string s1,s2;
  s1=n1.getValue();
  s2=n2.getValue();
  transform (s1.begin (), s1.end (), s1.begin (), ::toupper);
  transform (s2.begin (), s2.end (), s2.begin (), ::toupper);
  if(s1==s2){
    return true;
  }
  else{return false;}
}
//  stringで値を取得
string NewString::getValue()
{
    return m_value;
}
