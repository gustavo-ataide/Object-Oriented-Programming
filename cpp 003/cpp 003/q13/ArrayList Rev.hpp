#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
public:
  ArrayList(int);
  ~ArrayList();

    friend void somaArray(ArrayList &, int);
    friend void subArray(ArrayList &, int);
    friend void mulArray(ArrayList &, int);
    friend void divArray(ArrayList &, int);
    
    friend int buscaArray(ArrayList &, int);
    friend int removeArray(ArrayList &, int);
    friend int removeElArray(ArrayList &, int, int);

  ArrayList &add(int);

  void print() const;

private:
  int *arr;
  int tam;
  int pos;
};

#endif
