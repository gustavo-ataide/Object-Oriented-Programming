#ifndef Capa_hpp
#define Capa_hpp
#include <string>
#include <stdio.h>
using namespace std;

class Capa {
public:
    Capa (string, double);
    void setCasa(string);
    void setTamanho(double);
    
    
    string const getCasa();
    string const getCor();
    double const getTamanho();
    
    void const displaycapa();
    
private:
    string Casa;
    string Cor;
    double Tamanho;
};

#endif /* Capa_hpp */
