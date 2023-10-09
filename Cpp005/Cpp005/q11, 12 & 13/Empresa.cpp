#include "Empresa.hpp"


float Empresa::CalcularFolhaDePagamento(){
    float FolhaDePagamento = 0.0;
    for (int i=0;i!=QuantFuncionarios;i++){
        FolhaDePagamento += ArrFuncionarios[i].getSalario_bruto();
    }
    return FolhaDePagamento;
}

void Empresa::AdicionaFuncionario(Funcionario func){
    
    ArrFuncionarios[QuantFuncionarios] = func;
    QuantFuncionarios+=1;
}


void Empresa::RemoveFuncionario(Funcionario func){
    int i=0;
    bool Achou_sn=false;
    for (i=0;i!=QuantFuncionarios;i++){
        if (func.getNome() == ArrFuncionarios[i].getNome()){
            Achou_sn= true;
        }
        if (Achou_sn == true){
            ArrFuncionarios[i] = ArrFuncionarios[i+1];
        }
    }
    if(Achou_sn == false){
        cout << "Usuario nao encontrado." << endl;
    }
    else{
        QuantFuncionarios-=1;
    }
    
}


void Empresa::AdicionaCliente(Cliente cliente){
    ArrClientes[QuantClientes] = cliente;
    QuantClientes+=1;
}


void Empresa::RemoveCliente(Cliente cliente){
    int i=0;
    bool Achou_sn=false;
    for (i=0;i!=QuantClientes;i++){
        if (cliente.getNome() == ArrClientes[i].getNome()){
            Achou_sn= true;
        }
        if (Achou_sn == true){
            ArrClientes[i] = ArrClientes[i+1];
        }
    }
    if(Achou_sn == false){
        cout << "Usuario nao encontrado." << endl;
    }
    else{
        QuantClientes-=1;
    }
    
}
