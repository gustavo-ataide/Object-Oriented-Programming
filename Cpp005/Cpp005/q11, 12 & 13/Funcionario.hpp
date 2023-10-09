#ifndef Funcionario_hpp
#define Funcionario_hpp
#include "PessoaFisica.hpp"
#include <iostream>
#include <string>

class Funcionario: public PessoaFisica {
public:
    Funcionario(string nome="", string CPF="", long matricula=0, float salario_base=0.0, int carga_horaria_mensal=0, int horas_trabalhadas=0, float salario_bruto=0.0):PessoaFisica(nome, CPF), matricula(matricula), salario_base(salario_base),salario_bruto(salario_bruto), carga_horaria_mensal(carga_horaria_mensal), horas_trabalhadas(horas_trabalhadas){
        this->salario_bruto = salario_base*horas_trabalhadas/carga_horaria_mensal;
    }
    
    void setMatricula(long);
    long getMatricula();
    
    void setSalario_base(float);
    float getSalario_base();
    float getSalario_bruto();
    
    void setCargaHorariaMensal(int);
    int getCargaHorariaMensal();
    
    void setHorasTrabalhadas(int);
    int getHorasTrabalhadas();
    
    friend ostream& operator<<(ostream &out, const Funcionario &funcionario){
        out <<"Nome: " << funcionario.nome << endl;
        out << "CPF:"<< funcionario.CPF << endl;
        out <<"Matricula: " << funcionario.matricula << endl;
        out << "Salario Base:" << funcionario.salario_base << endl;
        out << "Carga Horária Mensal: " << funcionario.carga_horaria_mensal << endl;
        out << "Horas Trabalhadas: " << funcionario.horas_trabalhadas << endl;
        out << "Salario Bruto: " << funcionario.salario_bruto<<endl;
        return out;
    }
    
    

    
    
    
protected:
    long matricula;
    float salario_base;
    int carga_horaria_mensal;
    int horas_trabalhadas;
    float salario_bruto;
    
    
};

#endif /* Funcionario_hpp */
