#ifndef Trouxa_hpp
#define Trouxa_hpp
#include "Humano.hpp"
#include <string>
#include <iostream>
using namespace std;

class Trouxa:public Humano{
public:
    Trouxa(string nome,string profissao): Humano(nome), profissao(profissao){}
    void setProfissao(string profissao);
    string getProfissao();
    string getNome();
protected:
    string profissao;
};

#endif /* Trouxa_hpp */
