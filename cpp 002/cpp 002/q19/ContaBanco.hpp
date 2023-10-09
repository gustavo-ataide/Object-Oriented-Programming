//
//  ContaBanco.hpp
//  cpp 002
//
//  Created by Gustavo  Henrique on 29/08/23.
//

#ifndef ContaBanco_hpp
#define ContaBanco_hpp
#include <stdio.h>

class ContaBanco {
    public:
    ContaBanco(double saldo=0);
    
    //set
    void creditar(double input);
    void debitar(double input);
    
    //get
    double getsaldo();
    
    
    private:
        double saldo;
};

#endif
