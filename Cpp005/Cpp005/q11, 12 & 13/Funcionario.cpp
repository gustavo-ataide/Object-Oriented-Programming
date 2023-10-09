#include "Funcionario.hpp"

void Funcionario::setMatricula(long matricula){this->matricula = matricula;}
long Funcionario::getMatricula(){return matricula;}

void Funcionario::setSalario_base(float salario_base){
    this->salario_base = salario_base;
    this->salario_bruto = salario_base*horas_trabalhadas/carga_horaria_mensal;
}
float Funcionario::getSalario_base(){return salario_base;}
float Funcionario::getSalario_bruto(){return salario_bruto;}

void Funcionario::setCargaHorariaMensal(int cargaHorariaMensal){
    this->carga_horaria_mensal = cargaHorariaMensal;
    this->salario_bruto = salario_base*horas_trabalhadas/carga_horaria_mensal;
}

int Funcionario::getCargaHorariaMensal(){return carga_horaria_mensal;}

void Funcionario::setHorasTrabalhadas(int HorasTrabalhadas){
    this->horas_trabalhadas = HorasTrabalhadas;
    this->salario_bruto = salario_base*horas_trabalhadas/carga_horaria_mensal;
}
int Funcionario::getHorasTrabalhadas(){return horas_trabalhadas;}
