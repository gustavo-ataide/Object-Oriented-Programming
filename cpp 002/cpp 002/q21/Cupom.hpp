#ifndef Cupom_hpp
#define Cupom_hpp
#include <string>
#include <stdio.h>
using namespace std;

class Cupom{
public:
    Cupom(string id, string descricao, int quantidade, float preco);
    
    void setid(string idinput);
    void setdescricao(string descricaoinput);
    void setquantidade(int quantidadeinput);
    void setpreco(float precoinput);
    string getid();
    string getdescricao();
    int getquantidade();
    float getpreco();
    float calculacupom();
    
private:
    string id;
    string descricao;
    int quantidade;
    float preco;
    
};
#endif /* Cupom_hpp */
