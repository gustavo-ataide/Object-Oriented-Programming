#include "PessoaJuridica.hpp"
#include "Pessoa.hpp"
#include <string>
#include <iostream>


    
void PessoaJuridica::setCNPJ(string CNPJ){this->CNPJ = CNPJ;}
string PessoaJuridica::getCNPJ(){return this->CNPJ;}
void PessoaJuridica::setRazaoSocial(string RazaoSocial){this->RazaoSocial = RazaoSocial;}
string PessoaJuridica::getRazaoSocial(){return RazaoSocial;}
