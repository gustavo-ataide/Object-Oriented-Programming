#ifndef Empresa_hpp
#define Empresa_hpp

#include <iostream>
#include "PessoaJuridica.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"

class Empresa : public PessoaJuridica {
public:
    Empresa(string nome, string CNPJ, string RazaoSocial): PessoaJuridica(nome, CNPJ, RazaoSocial) {
        QuantFuncionarios = QuantClientes = 0;
        for (int i = 0; i < 30; i++) {
            ArrFuncionarios[i] = Funcionario();
            ArrClientes[i] = Cliente();
        }
    }
    
    float CalcularFolhaDePagamento();
    
    void AdicionaCliente(Cliente);
    void RemoveCliente(Cliente);
    
    void AdicionaFuncionario(Funcionario);
    void RemoveFuncionario(Funcionario);
    
    friend ostream& operator<<(ostream &out, Empresa &empresa){
        out <<"Nome: " << empresa.nome << endl;
        out <<"CNPJ: " << empresa.CNPJ << endl;
        out <<"Razao Social: " << empresa.RazaoSocial << endl;
        out<<endl;
        out<<endl;
        out<< "Clientes:"<<endl;
        out<<endl;
        for (int i=0; i!=empresa.QuantClientes;i++){
            out << empresa.ArrClientes[i] << endl;
        }
        
        out<<endl;
        out<< "Funcionarios:"<<endl;
        out<<endl;
        for (int i=0; i!=empresa.QuantFuncionarios;i++){
            out << empresa.ArrFuncionarios[i] << endl;
        }
        out<<endl;
        out << "Folha de pagamento: "<< empresa.CalcularFolhaDePagamento() <<endl;

        return out;
    }

private:
    Funcionario ArrFuncionarios[30];
    int QuantFuncionarios;
    Cliente ArrClientes[30];
    int QuantClientes;
};

#endif /* Empresa_hpp */
