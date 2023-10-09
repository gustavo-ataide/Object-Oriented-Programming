#ifndef ImovelNovo_hpp
#define ImovelNovo_hpp
#include <iostream>
#include "Imovel.hpp"

class ImovelNovo: public Imovel{
public:
    ImovelNovo(std::string Endereco, float Preco):Imovel(Endereco,Preco){}
    void setAdicional(float);
    float getAdicional();
    
};


#endif
