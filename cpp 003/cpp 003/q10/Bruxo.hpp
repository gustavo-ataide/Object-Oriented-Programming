#ifndef Bruxo_hpp
#define Bruxo_hpp
#include "Capa.hpp"
#include "varinha.hpp"
#include <string>
#include <iostream>
using namespace std;

class Bruxo{

    public:
    //set
    Bruxo(string nome = "", string casa = "", string feitico_favorito = "") : nome(nome), casa(casa), feitico_favorito(feitico_favorito), varinha(nullptr), capa(nullptr) {}
    
    
        void pegarvarinha_laele(Varinha *varinha);
        void vestircapa(Capa *capa);
        
        void setNome(string nome_input);
        void setCasa(string casa_input);
        void setFeitico_favorito(string feitico_favorito_input);
    
    
    //get
    string getNome()const;
    string getCasa()const;
    string getFeitico_favorito()const;
    Capa getCapa()const{return *capa;};
    Varinha getVarinha()const{return *varinha;};
    void lancar_feitico();
    void displaymessage();
    
private:
    string nome;
    string casa;
    string feitico_favorito;
    
    Varinha* varinha;
    Capa* capa;
};


#endif
