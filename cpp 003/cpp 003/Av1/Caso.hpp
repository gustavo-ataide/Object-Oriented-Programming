#ifndef Caso_hpp
#define Caso_hpp
#include <string>
#include <iostream>
#include "Policial.hpp"
#include "Suspeito.hpp"
#include "Vestigio.hpp"


class Caso{
public:
    Caso(string,string ,Policial);
    
    void insertPerito(Policial);
    void insertSuspeito(Suspeito);
    void insertVestigio(Vestigio);
    
    void removePerito(Policial);
    void removeSuspeito(Suspeito);
    void removeVestigio(Vestigio);
    
    void displayCaso()const;
    
private:
    Policial arrPeritos[5];
    int TopoArrPeritos=0;
    Suspeito arrSuspeito[10];
    int TopoArrSuspeito=0;
    Vestigio arrVestigio[20];
    int TopoArrVestigio=0;
    
    string identificacao;
    string data;
    Policial Delegado;
    
};

#endif
