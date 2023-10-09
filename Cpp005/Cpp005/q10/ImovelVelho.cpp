#include "ImovelVelho.hpp"

void ImovelVelho::setReducao(float Reducao){
    this->Adicional = Reducao;
    this->Preco -= Reducao;
}
float ImovelVelho::getReducao(){return Adicional;}
