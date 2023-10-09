

#ifndef empregado_hpp
#define empregado_hpp
#include <string>
using std::string;
class Empregado
{

public:

    
    Empregado(string nome,string sobrenome ,double salario);

    void setNome (string nome_input);
    void setSobrenome (string sobrenome_input);
    void setSalario (double salario_input);
    
    

    string getNome();
    string getSobrenome();
    double getSalario();

    void displayMessage();

private:
    string nome;
    string sobrenome;
    double salario;
};

#endif 
