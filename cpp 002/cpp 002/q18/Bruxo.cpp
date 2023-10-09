#include "Bruxo.hpp"
#include <iostream>
#include <string>
using namespace std;

Bruxo::Bruxo(string nome, string casa, string feitico_favorito){
    setNome(nome);
    setCasa(casa);
    setFeitico_favorito(feitico_favorito);
}

void Bruxo::setNome(string nome_input){
    if (nome_input==""){
        nome = "Sem nome";
    }
    else{
        nome = nome_input;
    }
}

void Bruxo::setCasa(string casa_input){
    
    if (casa_input==""){
        casa = "Sem casa";
    }
    else if(casa_input == "Grifinória"){
        casa = casa_input;
    }
    
    else if(casa_input == "Sonserina"){
        casa = casa_input;
    }
    
    else if(casa_input == "Lufa-lufa"){
        casa = casa_input;
    }
    
    else if(casa_input == "Corvinal" ){
        casa = casa_input;
    }
    else{
        casa = "{vazio}";
    }
}

void Bruxo::setFeitico_favorito(string feitico_favorito_input){
    if (feitico_favorito_input==""){
        feitico_favorito = "(Sem feitiço favorito)";
    }
    else{
        feitico_favorito = feitico_favorito_input;
    }
}

void Bruxo::lancar_feitico (){
    cout << "Lancando feitiço " << feitico_favorito << endl;
}

//get

string Bruxo::getNome(){
    return nome;
}

string Bruxo::getCasa(){
    return casa;
}
string Bruxo::getFeitico_favorito(){
    return feitico_favorito;
}

void Bruxo::displaymessage(){
    cout << "Meu nome é " << nome << endl;
    cout << "Minha casa é " << casa << endl;
    cout << "Meu feitiço favorito é " << feitico_favorito << endl;
}
