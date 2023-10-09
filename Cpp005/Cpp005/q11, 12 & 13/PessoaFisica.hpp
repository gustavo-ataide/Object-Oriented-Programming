#ifndef PessoaFisica_hpp
#define PessoaFisica_hpp

#include "Pessoa.hpp"
#include <string>
#include <iostream>
using namespace std;

class PessoaFisica: public Pessoa{
public:
    PessoaFisica(string nome, string CPF): Pessoa(nome), CPF(CPF){}
    void setCPF(string);
    string getCPF();
    
protected:
    string CPF;
};

#endif /* PessoaFisica_hpp */
