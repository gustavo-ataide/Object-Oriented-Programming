#ifndef complex_hpp
#define complex_hpp
#include <cmath>
#include <iostream>
#include <string>

class Complex{
public:
    Complex(float real=0, float imaginaria=0);
    
    const Complex operator+(const Complex &complex2){
        Complex resultado;
        resultado.real = (real + complex2.real);
        resultado.imaginaria = ((imaginaria + complex2.imaginaria));
        
        return resultado;
    }
    
    const void operator+=(const Complex &complex2){
        Complex resultado;
        this->real = (real + complex2.real);
        this->imaginaria = ((imaginaria + complex2.imaginaria));
        
    }
    
    
    
    const Complex operator-(const Complex &complex2){
        Complex resultado;
        resultado.real = (real - complex2.real);
        resultado.imaginaria = ((imaginaria - complex2.imaginaria));
        
        return resultado;
    }
    
    const void operator-=(const Complex &complex2){
        Complex resultado;
        this->real = (real - complex2.real);
        this->imaginaria = ((imaginaria - complex2.imaginaria));
        
    }
    
    const void operator--(int){
        Complex resultado;
        this->real = (real - 1);
        this->imaginaria = ((imaginaria - 1));
    }
    
    const void operator++(int){
        Complex resultado;
        this->real = (real + 1);
        this->imaginaria = ((imaginaria + 1));
    }
    
    float getreal(){return real;}
    float getimaginaria(){return imaginaria;}
    
private:
    float real;
    float imaginaria;
};






#endif /* complex_hpp */
