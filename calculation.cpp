#include <iostream>
#include "calculation.h"

void Calculation::setNumber1(int x){
  m_number1=x;
}
void Calculation::setNumber2(int x){
  m_number2=x;
}
int Calculation::getNumber1(){
  return m_number1;
}
int Calculation::getNumber2(){
  return m_number2;
}
int Calculation::add(){
  return m_number1+m_number2;
}
int Calculation::sub(){
  return m_number1-m_number2;
}
