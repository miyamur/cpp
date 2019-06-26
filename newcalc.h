#include <iostream>
#include "fundcalc.h"

using namespace std;

class NewCalc:public FundCalc{
public:
  double mul();
  double div();
};
