#ifndef Cliente_hpp
#define Cliente_hpp
#include "PessoaFisica.hpp"
#include <iostream>
#include <string>
using namespace std;


class Cliente: public PessoaFisica{
public:
    Cliente(string nome="", string CPF="", string telefone="", string endereco=""):PessoaFisica(nome, CPF), telefone(telefone),endereco(endereco){}
    
    void setTelefone(string);
    void setEndereco(string);
    
    string getTelefone();
    string getEndereco();
    
    friend ostream& operator << (ostream &out, Cliente &cliente){
        out <<"Nome: "<< cliente.getNome() <<endl;
        out <<"CPF: "<< cliente.getCPF()<<endl;
        out <<"Telefone: "<<cliente.getTelefone() <<endl;
        out <<"Endereço: "<<cliente.getEndereco()<<endl;
        
        return out;
    }
    
private:
    string telefone;
    string endereco;
};

#endif /* Cliente_hpp */
