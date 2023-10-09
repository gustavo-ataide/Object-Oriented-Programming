#include "ImovelNovo.hpp"

void ImovelNovo::setAdicional(float Adicional){
    this->Adicional = Adicional;
    Preco += Adicional;
}
float ImovelNovo::getAdicional(){return Adicional;}
