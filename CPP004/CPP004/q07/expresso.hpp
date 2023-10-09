

#ifndef expresso_hpp
#define expresso_hpp
#include "Bruxo.hpp"
#include "array.hpp"
#include <iostream>
#include <string>
using namespace std;
class ExpressoHogwarts{
    
public:
    ExpressoHogwarts(int vagas=100);
    void operator>>(const string nome){
        
        int indice_removido = passageiros+1;
        for(int i=0; i<passageiros;i++){
            if (lista_bruxos[i].getNome() == nome){
                indice_removido = i;
            }
        }
        if (indice_removido == passageiros+1){return;}
        for (int i=indice_removido; i<passageiros-1;i++){
            lista_bruxos[i] = lista_bruxos[i+1];
        }
        
        passageiros--;
    }
    
    void operator>>(const Bruxo &bruxo){
        Bruxo bruxoempty;
        int indice_removido = passageiros+1;
        for(int i=0; i<passageiros;i++){
            if (lista_bruxos[i].getNome() == bruxo.getNome()){
                indice_removido = i;
                lista_bruxos[i] = bruxoempty;
            }
        }
        if (indice_removido == passageiros+1){return;}
        for (int i=indice_removido; i<passageiros-1;i++){
            lista_bruxos[i] = lista_bruxos[i+1];
        }
        
        passageiros--;
    }
    
    void operator<<(const Bruxo &bruxo){
        if (passageiros == vagas){
            cout << "LOTOUU" << endl;
            return;
        }
        this->lista_bruxos[passageiros+1] = bruxo;
        passageiros++;
    }
    friend ostream &operator<<( ostream &out, ExpressoHogwarts &expresso);
private:
    int vagas;
    int passageiros;
    Bruxo lista_bruxos[100];
};

#endif /* expresso_hpp */
