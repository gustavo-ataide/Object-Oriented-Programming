#ifndef Imovel_hpp
#define Imovel_hpp

#include <iostream>
#include <string>

class Imovel {
public:
    Imovel(std::string Endereco, float Preco) : Endereco(Endereco), Preco(Preco) { Adicional = 0.0; }
    void setEndereco(std::string);
    void setPreco(float);

    std::string getEndereco();
    float getPreco();

    friend std::ostream& operator<<(std::ostream &out, const Imovel &imovel) {
        out << imovel.Endereco << std::endl;
        out << imovel.Preco << std::endl;

        return out;
    }

protected:
    std::string Endereco;
    float Preco;
    float Adicional;
};

#endif /* Imovel_hpp */
