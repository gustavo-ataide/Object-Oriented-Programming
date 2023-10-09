#ifndef PessoaJuridica_hpp
#define PessoaJuridica_hpp

#include "PessoaJuridica.hpp"
#include "Pessoa.hpp"
#include <string>
#include <iostream>

class PessoaJuridica: public Pessoa{
public:
    PessoaJuridica(string nome="", string CNPJ="", string RazaoSocial=""): Pessoa(nome), CNPJ(CNPJ), RazaoSocial(RazaoSocial){}
    
    void setCNPJ(string);
    string getCNPJ();
    
    void setRazaoSocial(string);
    string getRazaoSocial();
    
protected:
    string CNPJ;
    string RazaoSocial;
};


#endif /* PessoaJuridica_hpp */
