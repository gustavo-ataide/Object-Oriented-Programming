#include "HugeInteger.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdio>

using namespace std;
HugeInteger::HugeInteger(char intinput[40]){
    for (int i=0;intinput[i] != '\0';i++){
        if (!isdigit(intinput[i])){
            cout << "Entrada invalida." << endl;
            return;
        }
    }
    for (int i=0;i<40;i++){
        integer[i] = intinput[i];
    }
}

void HugeInteger::input(char intinput[40]){
    for (int i=0;intinput[i] != '\0';i++){
        if (!isdigit(intinput[i])){
            cout << "Entrada invalida." << endl;
            return;
        }
    }
    for (int i=0;i<40;i++){
        integer[i] = intinput[i];
    }
}

void HugeInteger::output(){
    cout << integer << endl;
}

void HugeInteger::add(HugeInteger n2){
    int number1 = stoi(integer);
    int number2 = stoi(n2.integer);
    int sum = number1 + number2;
    snprintf(integer,sizeof(integer), "%d", sum);
}

bool HugeInteger::isEqualTo(HugeInteger n2){
    if (stoi(integer) == (stoi(n2.integer))){return true;}
    else{return false;}
}

bool HugeInteger::isNotEqualTo(HugeInteger n2){
    if (stoi(integer) != (stoi(n2.integer))){return true;}
    else{return false;}
}


bool HugeInteger::isGreaterThan(HugeInteger n2){
    if (stoi(integer) > (stoi(n2.integer))){return true;}
    else{return false;}
}

bool HugeInteger::isLessThan(HugeInteger n2){
    if (stoi(integer) < (stoi(n2.integer))){return true;}
    else{return false;}
}

bool HugeInteger::isGreaterThanOrIqual(HugeInteger n2){
    if (stoi(integer) >= (stoi(n2.integer))){return true;}
    else{return false;}
}

bool HugeInteger::isLessThanOrIqual(HugeInteger n2){
    if (stoi(integer) <= (stoi(n2.integer))){return true;}
    else{return false;}
}


void HugeInteger::operator=(const char n1[40]){
    bool isAllDigits = true;
    
    if(n1[0] != '-' || n1[0] != '+'){
        for(int i=0; n1[i] != '\0'; i++){
            if (!isdigit(n1[i])){
                isAllDigits = false;
            }
        }
    }
    else if (n1[0] == '+' || n1[0] == '-'){
        for(int i=1; n1[i] != '\0'; i++){
            if (!isdigit(n1[i])){
                isAllDigits = false;
            }
        }
    }

    if (isAllDigits){
        strcpy(this->integer, n1);
    }
    else{strcpy(this->integer, "0");}
}

//bool HugeInteger::operator==(const HugeInteger &huge2){
//
//    for(int i=0; this->integer[i] != '\0' && huge2.integer[i] != '\0'; i++){
//        if (this->integer[i] != huge2.integer[i]){
//            return false;
//        }
//    }
//    return true;
//}



HugeInteger HugeInteger::operator+(const HugeInteger &Huge2){
    int res = stoi(this->integer) + stoi(Huge2.integer);
    char resChar[40];
    snprintf(resChar, sizeof(resChar), "%d", res);
    HugeInteger resultado(resChar);
    return resultado;
}

HugeInteger HugeInteger::operator-(const HugeInteger &Huge2){
    int res = stoi(this->integer) - stoi(Huge2.integer);
    char resChar[40];
    snprintf(resChar, sizeof(resChar), "%d", res);
    HugeInteger resultado(resChar);
    strcpy(resultado.integer, resChar);
    return resultado;
}

HugeInteger HugeInteger::operator*(const HugeInteger &Huge2){
    int res = stoi(this->integer) * stoi(Huge2.integer);
    char resChar[40];
    snprintf(resChar, sizeof(resChar), "%d", res);
    HugeInteger resultado(resChar);
    return resultado;
}

HugeInteger HugeInteger::operator/(const HugeInteger &Huge2){
    int res = stoi(this->integer) / stoi(Huge2.integer);
    char resChar[40];
    snprintf(resChar, sizeof(resChar), "%d", res);
    HugeInteger resultado(resChar);
    return resultado;
}




ostream &operator<<( ostream &out, const HugeInteger &huge){
    out << huge.integer;
    return out;
}




