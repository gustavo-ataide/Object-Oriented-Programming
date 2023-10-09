#include "animal.hpp"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(string nome, string raca): nome(nome), raca(raca){}

void Animal::caminha(){
    cout<< nome <<" está caminhando..." << endl;
}
