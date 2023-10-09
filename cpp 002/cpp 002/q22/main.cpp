#include "main.hpp"
#include "Cupom.hpp"
#include <iostream>
using namespace std;

int main(void){
    Cupom produto1("tv", "32 polegadas", 0,0);
    cout << produto1.getid() << " " <<produto1.getdescricao() << " " << produto1.getquantidade() << " " << produto1.getpreco() << endl;
    
    
    produto1.setid("TV");
    produto1.setdescricao("45 POLEGADAS");
    produto1.setquantidade(7);
    produto1.setpreco(1200.00);
    
    cout << "Após usar as funcoes SET" << endl;
    cout << produto1.getid() << " " <<produto1.getdescricao() << " " << produto1.getquantidade() << " " << produto1.getpreco() << endl;
    
    cout << "Agora... usando calculacupom(): " << produto1.calculacupom() << endl;
    
    return 0;
}
