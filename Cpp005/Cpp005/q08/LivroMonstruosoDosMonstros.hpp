#ifndef LivroMonstruosoDosMonstros_hpp
#define LivroMonstruosoDosMonstros_hpp
#include "Livro.hpp"
#include <iostream>

class LivroMonstruosoDosMonstros: public Livro{
public:
    LivroMonstruosoDosMonstros(string titulo, int ano, int n_paginas, string conteudo):Livro(titulo, ano, n_paginas, conteudo){}
    void ler();
};


#endif 
