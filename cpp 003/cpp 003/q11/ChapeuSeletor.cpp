#include "ChapeuSeletor.hpp"
#include <iostream>
#include <random>
using namespace std;
ChapeuSeletor::ChapeuSeletor(){}

void ChapeuSeletor::recepcionar(){
    cout << "Não há nada escondido em sua cabeça que o Chapéu Seletor não consiga ver, por isso é só me porem na cabeça que vou dizer em que casa de Hogwarts deverão ficar" << endl;
}

string ChapeuSeletor::sortearCasa(){
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist (1,4);
    
    int numeroaleatorio = dist(mt);
    string casa;
    switch (numeroaleatorio) {
        case 1: casa = "grifinoria";break;
        case 2: casa = "sonserina";break;
        case 3: casa = "corvinal";break;
        case 4: casa = "lufa-lufa";break;
        default:
            break;
    }
    return casa;
}
