#include "Imovel.hpp"
#include <string>
using namespace std;

void Imovel::setEndereco(string Endereco){
    this->Endereco = Endereco;
}
void Imovel::setPreco(float Preco){
    this->Preco = Preco;
}

string Imovel::getEndereco(){return Endereco;};
float Imovel::getPreco(){return Preco;};
