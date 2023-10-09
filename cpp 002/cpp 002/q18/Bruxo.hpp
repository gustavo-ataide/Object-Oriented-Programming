#ifndef Bruxo_hpp
#define Bruxo_hpp
#include <string>
#include <iostream>
using namespace std;

class Bruxo{

    public:
    //set
        Bruxo(string nome="", string casa="", string feitico_favorito="");
        void setNome(string nome_input);
        void setCasa(string casa_input);
        void setFeitico_favorito(string feitico_favorito_input);
    
    //get
    string getNome();
    string getCasa();
    string getFeitico_favorito();
    void lancar_feitico();
    void displaymessage();
    
private:
    string nome;
    string casa;
    string feitico_favorito;
};


#endif
