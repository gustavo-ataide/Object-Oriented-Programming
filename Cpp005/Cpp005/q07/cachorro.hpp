#ifndef cachorro_hpp
#define cachorro_hpp
#include "animal.hpp"
#include <iostream>

class Cachorro: public Animal{
public:
    Cachorro(string nome, string raca):Animal(nome, raca){}
    void late();
};

#endif /* cachorro_hpp */
