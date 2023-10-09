#include "Bruxo.hpp"
#include "Capa.hpp"
#include "varinha.hpp"
#include <iostream>
#include <string>
using namespace std;



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
    else if(casa_input == "grifinoria"){
        casa = casa_input;
    }
    
    else if(casa_input == "sonserina"){
        casa = casa_input;
    }
    
    else if(casa_input == "lufa-lufa"){
        casa = casa_input;
    }
    
    else if(casa_input == "corvinal" ){
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

string Bruxo::getNome() const {
    return nome;
}

string Bruxo::getCasa() const{
    return casa;
}
string Bruxo::getFeitico_favorito() const{
    return feitico_favorito;
}



void Bruxo::displaymessage(){
    cout << "Meu nome é " << nome << endl;
    cout << "Minha casa é " << casa << endl;
    cout << "Meu feitiço favorito é " << feitico_favorito << endl;
    
    
}
