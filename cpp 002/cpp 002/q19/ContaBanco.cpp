
#include "ContaBanco.hpp"
#include <iostream>
using namespace std;

ContaBanco::ContaBanco(double saldoinicial){
    if (saldoinicial <=0){
        saldo = 0;
        return;
    }
    saldo = saldoinicial;
    
}

void ContaBanco::creditar(double input){
    saldo += input;
}

void ContaBanco::debitar(double input){
    if (saldo - input < 0){
        cout << "Voce nao possui saldo suficiente" << endl;
        return;
    }
    saldo -= input;
}

double ContaBanco::getsaldo(){
    return saldo;
}
