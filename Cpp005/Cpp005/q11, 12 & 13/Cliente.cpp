#include "Cliente.hpp"

void Cliente::setTelefone(string Telefone){this->telefone = Telefone;}
void Cliente::setEndereco(string Endereco){this->endereco = Endereco;}

string Cliente::getTelefone(){return telefone;}
string Cliente::getEndereco(){return endereco;}

