#include "Cupom.hpp"
#include <iostream>
#include <string>
using namespace std;

struct item{
    string id;
    string descricao;
    int quantidade;
    float preco;
};


Cupom::Cupom(){
    item lista[20];
}

void Cupom::additem(string id, string descricao, int quantidade, float preco){
    for (int i=0; lista[i] != "\0"; i++){
        
    }
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


