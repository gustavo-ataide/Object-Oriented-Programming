#include "expresso.hpp"
using namespace std;




ExpressoHogwarts::ExpressoHogwarts(int vagas){
    this->vagas = vagas;
    passageiros = 0;
    
}

ostream &operator<<( ostream &out, ExpressoHogwarts &expresso)
{
    cout << "Lista de passageiros" << endl;
    
    for (int i=0; i<expresso.passageiros;i++){
        string nome =expresso.lista_bruxos[i].getNome();
        out << nome << endl;
    }
    return out;
}







