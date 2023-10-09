#include "Pessoa.hpp"
#include <iostream>
#include <string>


Pessoa::Pessoa(string nome){this->nome = nome;}

void Pessoa::setNome(string nome){this->nome = nome;}
string Pessoa::getNome(){return nome;}



