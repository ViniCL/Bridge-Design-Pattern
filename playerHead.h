#pragma once

#include <iostream>

#include "cabeloInterface.h"

class PlayerHead {
  
  public:

   PlayerHead(CabeloInterface* hair, int qtdDentes) : 
   cabelo(hair),
   qtdDentesInteiros(qtdDentes){}

   CabeloInterface* cabelo;
   int qtdDentesInteiros;


};
