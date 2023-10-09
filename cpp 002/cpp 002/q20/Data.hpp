
#ifndef Data_hpp
#define Data_hpp

#include <iostream>

class Data{
    public:
    
    Data (int dia, int mes, int ano);
    
    void setdia(int input);
    void setmes(int input);
    void setano(int input);
    
    //get
    void mostrarData();
    
    private:
        int dia;
        int mes;
        int ano;
};

#endif 
