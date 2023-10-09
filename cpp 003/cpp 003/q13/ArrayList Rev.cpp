#include <iostream>
#include "ArrayList Rev.hpp"
using namespace std;



ArrayList::ArrayList(int tam) : pos(0) {
  if (tam > 0) {
    this->tam = tam;
    arr = new int[tam];
  } else {
    arr = nullptr;
    this->tam = 0;
  }
}

ArrayList::~ArrayList() {
  if (arr)
    delete[] arr;
}

ArrayList &ArrayList::add(int v) {
  if (pos < tam)
    arr[pos++] = v;

  return *this;
}

void ArrayList::print() const {
  for (int i = 0; i < pos; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}


void somaArray(ArrayList &arr, int inteiro) {
    for (int i = 0; i < arr.pos; i++) {
        arr.arr[i] += inteiro;
    }
}
void subArray(ArrayList &arr, int inteiro){
    for (int i = 0; i < arr.pos; i++) {
        arr.arr[i] -= inteiro;
    }
}
void mulArray(ArrayList &arr, int inteiro){
    for (int i = 0; i < arr.pos; i++) {
        arr.arr[i] *= inteiro;
    }
}
void divArray(ArrayList &arr, int inteiro){
    for (int i = 0; i < arr.pos; i++) {
        arr.arr[i] /= inteiro;
    }
}


int buscaArray(ArrayList &arr, int procurado){
    for (int i=0; i<arr.tam; i++){
        if (arr.arr[i]== procurado) {
            return i;
        }
    }
    return -1;
}
int removeArray(ArrayList &arr, int indice){
    if(indice < arr.tam){
        for (int i = indice; i < arr.tam - 1; i++) {
            arr.arr[i] = arr.arr[i + 1];
        }
        arr.tam--;
        return 0;
    }
    return -1;
    
}
int removeElArray(ArrayList &arr, int procurado, int i = 0) {
    if (i < arr.tam) {
        if (arr.arr[i] == procurado) {
            removeArray(arr, i);
            return removeElArray(arr, procurado, i + 1);
        } else {
            return removeElArray(arr, procurado, i + 1);
        }
    }
    return 0;
}

//DESISTOOOOOOOOOOO

