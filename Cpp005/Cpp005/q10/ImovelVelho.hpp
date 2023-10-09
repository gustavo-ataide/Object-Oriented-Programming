#ifndef ImovelVelho_hpp
#define ImovelVelho_hpp
#include <iostream>
#include "Imovel.hpp"

class ImovelVelho:public Imovel{
public:
    ImovelVelho(std::string Endereco, float Preco):Imovel(Endereco,Preco){}
    void setReducao(float);
    float getReducao();
};

#endif /* ImovelVelho_hpp */
