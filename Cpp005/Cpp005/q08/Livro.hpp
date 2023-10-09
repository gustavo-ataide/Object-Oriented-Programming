#ifndef Livro_hpp
#define Livro_hpp
#include <iostream>
#include <string>
using namespace std;

class Livro{
public:
    Livro(string titulo, int ano, int n_paginas, string conteudo): titulo(titulo), ano(ano), n_paginas(n_paginas), conteudo(conteudo){};
    void ler();
private:
    string titulo;
    int ano;
    int n_paginas;
    string conteudo;
};

#endif
