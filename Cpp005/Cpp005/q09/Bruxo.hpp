#ifndef Bruxo_hpp
#define Bruxo_hpp
#include "Capa.hpp"
#include "varinha.hpp"
#include "Humano.hpp"
#include <string>
#include <iostream>
using namespace std;

class Bruxo: public Humano{

    public:
    //set
    Bruxo(string nome = "", string casa = "", string feitico_favorito = "") : casa(casa), feitico_favorito(feitico_favorito), Humano(nome) {}
    

        
        void setNome(string nome_input);
        void setCasa(string casa_input);
        void setFeitico_favorito(string feitico_favorito_input);
    
    
    //get
    string getNome()const;
    string getCasa()const;
    string getFeitico_favorito()const;
    void lancar_feitico();
    void displaymessage();
    
private:
    string nome;
    string casa;
    string feitico_favorito;
    

};


#endif
