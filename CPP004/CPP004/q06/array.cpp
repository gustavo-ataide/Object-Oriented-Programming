#include "array.hpp"
#include <iostream>
using std::cerr, std::endl;

ostream &operator<<(ostream &out , const Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    out << a.arr[i] << " ";
  
  out << endl;

  return out;
}

istream &operator>>(istream &inp , Array &a)
{
  for (int i = 0 ; i < a.tam ; i++)
    inp >> a.arr[i];
  
  return inp;
}

Array::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

Array::Array(const Array &obj) : tam(obj.tam)
{
  arr = new int[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

Array::~Array()
{
  delete [] arr;
}

int Array::getSize() const
{
  return tam;
}


Array operator+(const Array &arr1, const Array &arr2) {
    int newSize = arr1.getSize() + arr2.getSize();
    Array newArray(newSize);

    for (int i = 0; i < arr1.getSize(); i++) {
        newArray[i] = arr1[i];
    }

    for (int i = 0; i < arr2.getSize(); i++) {
        newArray[i + arr1.getSize()] = arr2[i];
    }

    return newArray;
}


Array& operator+=(Array &arr1, const Array &arr2) {
    int newSize = arr1.getSize() + arr2.getSize();
    Array newArray(newSize);

    for (int i = 0; i < arr1.getSize(); i++) {
        newArray[i] = arr1[i];
    }

    for (int i = 0; i < arr2.getSize(); i++) {
        newArray[i + arr1.getSize()] = arr2[i];
    }

    arr1 = newArray;

    return arr1;
}

const Array &Array::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new int[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

bool Array::operator==(const Array &obj) const
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

int &Array::operator[](int i)
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

int Array::operator[](int i) const
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}
