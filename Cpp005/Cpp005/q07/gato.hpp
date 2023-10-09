#ifndef gato_hpp
#define gato_hpp
#include "animal.hpp"
#include <iostream>



class Gato:public Animal{
public:
    Gato(string nome, string raca):Animal(nome, raca){}
    void mia();
};

#endif /* gato_hpp */
