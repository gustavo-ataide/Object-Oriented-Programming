#include "Cupom.hpp"
#include <iostream>
#include <string>
using namespace std;



Cupom::Cupom(string idinput, string descricaoinput, int quantidadeinput, float precoinput){
    id = idinput;
    descricao = descricaoinput;
    
    if(quantidadeinput < 0){quantidade=0;}
    else{quantidade = quantidadeinput;}
    
    if(precoinput < 0){preco=0;}
    else{preco = precoinput;}
}

void Cupom::setid(string idinput){
    id = idinput;
}
void Cupom::setdescricao(string descricaoinput){
    descricao = descricaoinput;
}
void Cupom::setquantidade(int quantidadeinput){
    quantidade = quantidadeinput;
}
void Cupom::setpreco(float precoinput){
    preco = precoinput;
}




string Cupom::getid(){
    return id;
}

string Cupom::getdescricao(){
    return descricao;
}

int Cupom::getquantidade(){
    return quantidade;
}

float Cupom::getpreco(){
    return preco;
}

float Cupom::calculacupom(){
    float precofinal = quantidade*preco;
    return precofinal;
}


