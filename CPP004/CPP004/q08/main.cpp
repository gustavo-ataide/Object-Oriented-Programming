#include "complex.hpp"

int main() {
    Complex complex1(3, 4);
    Complex complex2(1, 2);

    // Teste de adição
    Complex resultado1 = complex1 + complex2;
    std::cout << "Resultado da adição: " << resultado1.getreal() << " + " << resultado1.getimaginaria() << "i" << std::endl;

    // Teste de subtração
    Complex resultado2 = complex1 - complex2;
    std::cout << "Resultado da subtração: " << resultado2.getreal() << " + " << resultado2.getimaginaria() << "i" << std::endl;

    // Teste de adição composta
    complex1 += complex2;
    std::cout << "Resultado da adição composta: " << complex1.getreal() << " + " << complex1.getimaginaria() << "i" << std::endl;

    // Teste de subtração composta
    complex1 -= complex2;
    std::cout << "Resultado da subtração composta: " << complex1.getreal() << " + " << complex1.getimaginaria() << "i" << std::endl;

    // Teste de pós-incremento
    complex1++;
    std::cout << "Resultado do pós-incremento: " << complex1.getreal() << " + " << complex1.getimaginaria() << "i" << std::endl;

    // Teste de pós-decremento
    complex1--;
    std::cout << "Resultado do pós-decremento: " << complex1.getreal() << " + " << complex1.getimaginaria() << "i" << std::endl;

    return 0;
}
