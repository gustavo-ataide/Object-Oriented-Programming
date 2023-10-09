#include "empregado.hpp"
#include <iostream>
using namespace std;
#include <string>

using  std::string;

Empregado::Empregado(string nome, string sobrenome, double salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}


//Set
void Empregado::setNome(string nome_input){
    if (nome_input == ""){
        nome = "Sem nome\n";
    }
    else{
        nome = nome_input;
    }
}

void Empregado::setSobrenome(string sobrenome_input){
    if (sobrenome_input == ""){
        sobrenome = "Sem Sobrenome\n";
    }
    else{
        sobrenome = sobrenome_input;
    }
}

void Empregado::setSalario( double salario_input){
    salario = salario_input;
}

//get

string Empregado::getNome(){
    return nome;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}


void Empregado::displayMessage(){
    cout << "Nome e Sobrenome: " << getNome() << " " << getSobrenome() << endl;
    cout << "Salário: " << getSalario() << endl;
}



