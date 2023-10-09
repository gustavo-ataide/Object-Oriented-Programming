#ifndef varinha_hpp
#define varinha_hpp
#include <string>
#include <stdio.h>
using namespace std;

class Varinha{
public:
    Varinha(string, string, double);
    
    void setTipoDeMadeira(string);
    void setNucleo(string);
    void setComprimento(double);
    
    string const getTipoDeMadeira();
    string const getNucleo();
    double const getComprimento();
    
    void const displayVarinha();
    
    
private:
    string TipoDeMadeira;
    string Nucleo;
    double Comprimento;
};

#endif
