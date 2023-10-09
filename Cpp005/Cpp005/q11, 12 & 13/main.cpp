#include <iostream>
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Empresa.hpp"

int main(void){
    //Q 11
    cout<<"Pessoa Fisica: " << endl;
    PessoaFisica PF("Gustavo", "702.897.934-24");
    cout << PF << endl;
    cout<<endl;
    
    cout << "Pessoa Juridica: "<<endl;
    PessoaJuridica PJ("InovaWeb", "10.783.898/0003-37", "Menor ideia");
    cout << PJ << endl;
    
    //Q 12
    cout<<endl;
    cout<< "Cliente:"<< endl;
    Cliente cliente("Ronaldo", "101.010.204-32", "(83) 99695-3144", "Rua Tal");
    cout << cliente << endl;
    
    //Q 13
    cout<<endl;
    cout<< "Funcionario:"<< endl;
    Funcionario funcionario("Hebert", "157.171.155-12", 202221250020, 1000.00, 180,200);
    cout << funcionario << endl;
    
    funcionario.setMatricula(202100502030);
    funcionario.setNome("Hugo");
    funcionario.setCPF("702.897.935-38");
    funcionario.setSalario_base(1500.00);
    funcionario.setHorasTrabalhadas(120);
    funcionario.setCargaHorariaMensal(180);
    
    cout<<endl;
    cout << "Apos usar todos os metodos Set: " << endl;
    cout<< "Funcionario:"<< endl;
    cout << funcionario << endl;
    
    
    
    //Q 14
    Funcionario funcionario2("Julio", "157.171.155-12", 218049810980, 1250.00, 180,180);
    Cliente cliente2("Gerson", "232.123.111-24", "(83) 92748-2144", "Rua Blau");
    cout<<endl;
    cout<< "Empresa Braiscompany"<< endl;
    Empresa BraisCompany("BraisCompany","157.171/000-1","Golpe LTDA");
    BraisCompany.AdicionaCliente(cliente);
    BraisCompany.AdicionaCliente(cliente2);
    BraisCompany.AdicionaFuncionario(funcionario);
    BraisCompany.AdicionaFuncionario(funcionario2);
    cout<<BraisCompany<<endl;
    
    cout<<endl;
    cout<<endl;
    cout<< "Após retirar 1 cliente e 1 funcionario:" << endl;
    
    BraisCompany.RemoveFuncionario(funcionario);
    BraisCompany.RemoveCliente(cliente2);
    cout<<BraisCompany<<endl;
    return 0;
}
