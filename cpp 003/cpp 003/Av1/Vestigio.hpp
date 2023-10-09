#ifndef Vestigio_hpp
#define Vestigio_hpp
#include <string>
#include <iostream>
using namespace std;

class Vestigio{
public:
    Vestigio(string="", string="", bool=false);
    
    void  displayvestigio() const;
    
private:
    string Nome;
    string Tipo;
    bool Evidencia_sn;
};


#endif
