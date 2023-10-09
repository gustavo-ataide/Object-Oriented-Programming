#include "Data.hpp"
#include <iostream>
using namespace std;

Data::Data(int diainput, int mesinput, int anoinput){
    if (mesinput < 1 || mesinput > 12){
        mes = 1;
        return;
    }
    dia = diainput;
    mes = mesinput;
    ano = anoinput;
}

void Data::setdia(int diainput){
    dia = diainput;
}

void Data::setmes(int mesinput){
    if (mesinput < 1 || mesinput > 12){
        mes = 1;
        return;
    }
    mes = mesinput;
}

void Data::setano(int anoinput){
    ano = anoinput;
}

void Data::mostrarData(){
    cout << dia << "/" << mes << "/" << ano;
}
