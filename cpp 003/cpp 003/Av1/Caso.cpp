#include "Caso.hpp"
#include <iostream>
#include <string>
using namespace std;

Caso::Caso(string identificacao, string data, Policial Delegado):identificacao(identificacao), data(data), Delegado(Delegado){}

void Caso::insertPerito(Policial policial){
    arrPeritos[TopoArrPeritos] = policial;
    TopoArrPeritos++;
}

void Caso::insertSuspeito(Suspeito suspeito){
    arrSuspeito[TopoArrSuspeito] = suspeito;
    TopoArrSuspeito++;
}

void Caso::insertVestigio(Vestigio vestigio){
    arrVestigio[TopoArrVestigio] = vestigio;
    TopoArrVestigio++;
}





void  Caso::displayCaso()const{
    cout << "-Dados do Caso- " << endl;
    cout << "-Identificaçao: " << identificacao << endl;
    cout << "-Data:" << data << endl;
    cout << "Delegado: " << endl;
    Delegado.displaypolicial();
    cout << endl;
    cout << "Policiais no caso: " << endl;
    for(int i=0; i<TopoArrPeritos;i++){arrPeritos[i].displaypolicial();}
    
    cout << endl;
    cout << "Suspeitos no caso: " << endl;
    for(int i=0; i<TopoArrSuspeito;i++){arrSuspeito[i].displaysuspeito();}
    
    cout << endl;
    cout << "Vestigios no caso: " << endl;
    for(int i=0; i<TopoArrVestigio;i++){arrVestigio[i].displayvestigio();}
}
