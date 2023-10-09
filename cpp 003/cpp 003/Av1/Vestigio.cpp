#include "Vestigio.hpp"
#include <iostream>
#include <string>
using namespace std;

Vestigio::Vestigio(string nome, string tipo, bool Evidencia_sn): Nome(nome), Tipo(tipo), Evidencia_sn(Evidencia_sn){};

void  Vestigio::displayvestigio()const{
    cout << "Dados do Vestigio: " << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Tipo: " << Tipo << endl;
    if(Evidencia_sn == 1){cout << "É evidencia? SIM"<< endl;}
    else {cout << "É evidencia? NÃO" << endl;}
    
    cout << endl;
}
