#ifndef Suspeito_hpp
#define Suspeito_hpp
#include <string>
#include <iostream>
using namespace std;

class Suspeito{
public:
    Suspeito(string="");
    void Ser_indiciado();
    
    void  displaysuspeito() const;
private:
    string Nome;
    bool Indiciado_sn;
};


#endif 
