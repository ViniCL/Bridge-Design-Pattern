#include <iostream>
#include "playerHead.h"
#include "cabeloInterface.h"
#include "moicanoEstiloNeymar.h"
#include "blackPower.h"


int main(){

    CabeloInterface* cabeloMoicano = new MoicanoEstiloNeymar;
    CabeloInterface* cabeloAfro = new BlackPower;


    PlayerHead* cabeca = new PlayerHead(cabeloMoicano, 28);

    cout << cabeca->qtdDentesInteiros << "\n";
    cout << cabeca->cabelo->cor() << "\n";
    cout << cabeca->cabelo->tamanho() << "\n";
    cout << "_______________________________ \n";


    PlayerHead* cabecaTwo = new PlayerHead(cabeloAfro, 32);

    cout << cabecaTwo->qtdDentesInteiros << "\n";
    cout << cabecaTwo->cabelo->cor() << "\n";
    cout << cabecaTwo->cabelo->tamanho() << "\n";
    cout << "_______________________________ \n";


    delete cabeloMoicano;
    delete cabeloAfro;
    delete cabeca;
    delete cabecaTwo;

    return 0;
}

