//#include <iostream>
//using namespace std;
//
//#include "ArrayList.hpp"
//
//ArrayList::ArrayList(int tam) : pos(0) {
//  if (tam > 0) {
//    this->tam = tam;
//    arr = new int[tam];
//  } else {
//    arr = nullptr;
//    this->tam = 0;
//  }
//}
//
//ArrayList::~ArrayList() {
//  if (arr)
//    delete[] arr;
//}
//
//ArrayList &ArrayList::add(int v) {
//  if (pos < tam)
//    arr[pos++] = v;
//
//  return *this;
//}
//
//void ArrayList::print() const {
//  for (int i = 0; i < pos; i++)
//    std::cout << arr[i] << " ";
//  std::cout << std::endl;
//}
//
//
//void somaArray(ArrayList &arr, int inteiro) {
//    for (int i = 0; i < arr.pos; i++) {
//        arr.arr[i] += inteiro;
//    }
//}
//void subArray(ArrayList &arr, int inteiro){
//    for (int i = 0; i < arr.pos; i++) {
//        arr.arr[i] -= inteiro;
//    }
//}
//void mulArray(ArrayList &arr, int inteiro){
//    for (int i = 0; i < arr.pos; i++) {
//        arr.arr[i] *= inteiro;
//    }
//}
//void divArray(ArrayList &arr, int inteiro){
//    for (int i = 0; i < arr.pos; i++) {
//        arr.arr[i] /= inteiro;
//    }
//}
