#include <iostream>
#include "newcalc.h"

using namespace std;

double NewCalc::mul(){
  return getNumber1()*getNumber2();
}

double NewCalc::div(){
  return getNumber1()/getNumber2();
}
