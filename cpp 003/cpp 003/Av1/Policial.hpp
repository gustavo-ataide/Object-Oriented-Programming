#ifndef main_hpp
#define main_hpp
#include <iostream>
#include <string>
#include "Suspeito.hpp"
using namespace std;

class Policial{
public:
    Policial(string Nome="", string Cargo="");
    
    void setCargo(string);
    void setNome(string);
    

    
    void  displaypolicial()const;
    
private:
    string Nome;
    string Cargo;
};

#endif /* main_hpp */
