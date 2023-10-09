#include "Capa.hpp"
#include <iostream>
#include <string>

Capa::Capa(string Casa, double Tamanho){
    while(Casa != "grifinoria" && Casa != "sonserina" && Casa != "corvinal" && (Casa != "lufa-lufa")){
        cout << "Casa inválida. Só serão aceitas : grifinoria, sonserina, corvinal ou lufa-lufa. Tente novamente! " << endl;
        cin >> Casa;
    }
    
    if (Casa == "grifinoria"){this->Casa = "grifinoria"; this->Cor = "Vermelho";}
    else if(Casa == "sonserina"){this->Casa = "sonserina"; this->Cor = "Verde";}
    else if(Casa == "corvinal"){this->Casa = "corvinal"; this->Cor = "Azul";}
    else if(Casa == "lufa-lufa"){this->Casa = "lufa-lufa"; this->Cor = "Amarelo";}
    
    this->Tamanho = Tamanho;
}


void Capa::setCasa(string Casa){
    while(Casa != "grifinoria" && Casa != "sonserina" && Casa != "corvinal" && (Casa != "lufa-lufa")){
        cout << "Casa inválida. Só serão aceitas : grifinoria, sonserina, corvinal ou lufa-lufa. Tente novamente! " << endl;
        cin >> Casa;
    }
    if (Casa == "grifinoria"){this->Casa = "grifinoria"; this->Cor = "Vermelho";}
    else if(Casa == "sonserina"){this->Casa = "sonserina"; this->Cor = "Verde";}
    else if(Casa == "corvinal"){this->Casa = "corvinal"; this->Cor = "Azul";}
    else if(Casa == "lufa-lufa"){this->Casa = "lufa-lufa"; this->Cor = "Amarelo";}
    
}
        


void Capa::setTamanho(double Tamanho){
    this->Tamanho = Tamanho;
}

string const Capa::getCasa(){return Casa;}

string const Capa::getCor(){return Cor;}

double const Capa::getTamanho(){return Tamanho;}

void const Capa::displaycapa(){
    cout << "Atributos da capa: " << endl;
    cout << "Casa: " << Casa << endl;
    cout << "Cor: " << Cor << endl;
    cout << "Tamanho: " << Tamanho << endl;
}
