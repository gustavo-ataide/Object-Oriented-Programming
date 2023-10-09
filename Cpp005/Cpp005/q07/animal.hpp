#ifndef animal_hpp
#define animal_hpp
#include <iostream>
#include <string>
using namespace std;


class Animal{
public:
    Animal(string,string);
    void caminha();
    
protected:
    string nome;
    string raca;
};


#endif
