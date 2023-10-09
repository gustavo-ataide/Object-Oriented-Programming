#include <iostream>
#include "Suspeito.hpp"
using namespace std;

Suspeito::Suspeito(string nome): Nome(nome), Indiciado_sn(false){}

void Suspeito::Ser_indiciado(){
    this->Indiciado_sn = true;
}

void  Suspeito::displaysuspeito() const{
    cout << "Dados do Suspeito: " << endl;
    cout << "Nome: " << Nome << endl;
    if(Indiciado_sn == true){cout << "Indiciado? SIM" << endl;}
    else{cout << "Indiciado? NÃO" << endl;}
    cout << endl;
}
