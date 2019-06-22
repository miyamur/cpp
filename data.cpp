#include "data.h"

void CData::init()
{
    number = 0;
    comment = "";
}
void CData::setNumber(int x){
  number=x;
}
void CData::setComment(string s){
  comment=s;
}
int CData::getNumber(){
  return number;
}
string CData::getComment(){
  return comment;
}
