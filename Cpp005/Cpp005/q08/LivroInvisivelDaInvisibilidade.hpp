#ifndef LivroInvisivelDaInvisibilidade_hpp
#define LivroInvisivelDaInvisibilidade_hpp
#include "Livro.hpp"
#include <iostream>

class LivroInvisivelDaInvisibilidade: Livro{
public:
    LivroInvisivelDaInvisibilidade(string titulo, int ano, int n_paginas, string conteudo):Livro(titulo, ano, n_paginas, conteudo){}
    void ler();
};

#endif
