#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <string>
#include <iostream>
using namespace std;

class Pessoa {
public:
    Pessoa(string = "");
    void setNome(string);
    string getNome();
    
    
    
    friend ostream& operator<<(ostream &out, const Pessoa &people){
        out << people.nome;
        return out;
    }
protected:
    string nome;
};

#endif /* Pessoa_hpp */
