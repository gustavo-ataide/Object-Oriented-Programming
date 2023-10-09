#include "varinha.hpp"
#include <iostream>
#include <string>
using namespace std;

Varinha::Varinha(string TipoDeMadeira, string Nucleo, double Comprimento){
    this->TipoDeMadeira = TipoDeMadeira;
    this->Nucleo = Nucleo;
    this->Comprimento = Comprimento;
}

//set
void Varinha::setTipoDeMadeira(string TipoDeMadeira){
    this->TipoDeMadeira = TipoDeMadeira;
}

void Varinha::setNucleo(string Nucleo){
    this->Nucleo = Nucleo;
}

void Varinha::setComprimento(double Comprimento){
    this->Comprimento = Comprimento;
}

//get
string const Varinha::getTipoDeMadeira(){
    return TipoDeMadeira;
}

string const Varinha::getNucleo(){
    return Nucleo;
}

double const Varinha::getComprimento(){
    return Comprimento;
}

void const Varinha::displayVarinha(){
    cout << "Atributos da varinha: " << endl;
    cout << "Tipo de Madeira: " << TipoDeMadeira << endl;
    cout << "Nucleo: " << Nucleo << endl;
    cout << "Comprimento: " << Comprimento << endl;
    
}
