#include "Policial.hpp"
#include "Suspeito.hpp"
#include <iostream>
#include <string>
using namespace std;

Policial::Policial(string Nome, string Cargo){
    this-> Nome = Nome;
    this->Cargo = Cargo;
}
    
void Policial::setCargo(string Cargo){
    this->Cargo = Cargo;
}
void Policial::setNome(string Nome){
    this->Nome = Nome;
}


    
    
void  Policial::displaypolicial()const{
    cout << "Dados do Policial:" << endl;
    cout << "Nome: " << Nome << endl;
    cout << "Cargo: " << Cargo << endl;
    cout << endl;
}
    


