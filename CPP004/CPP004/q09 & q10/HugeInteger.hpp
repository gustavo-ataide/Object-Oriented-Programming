#ifndef HugeInteger_hpp
#define HugeInteger_hpp
#include <iostream>
using namespace std;

class HugeInteger{
public:
    
    HugeInteger(char intinput[40]);
    
    void input(char intinput[40]);
    void output();
    void add(HugeInteger n2);
    
    //comparadores
    bool isEqualTo(HugeInteger n2);
    bool isNotEqualTo(HugeInteger n2);
    bool isGreaterThan(HugeInteger n2);
    bool isLessThan(HugeInteger n2);
    bool isGreaterThanOrIqual(HugeInteger n2);
    bool isLessThanOrIqual(HugeInteger n2);
    
    void operator=(const char n2[40]);
    HugeInteger operator+(const HugeInteger &);
    HugeInteger operator-(const HugeInteger &Huge2);
    HugeInteger operator*(const HugeInteger &Huge2);
    HugeInteger operator/(const HugeInteger &Huge2);
    
    void operator++(int){
        int res = stoi(this->integer) + 1;
        char resChar[40];
        snprintf(resChar, sizeof(resChar), "%d", res);
        strcpy(this->integer, resChar);
    }
    void operator--(int){
        int res = stoi(this->integer) + 1;
        char resChar[40];
        snprintf(resChar, sizeof(resChar), "%d", res);
        strcpy(this->integer, resChar);
    }
    
    void operator+=(const HugeInteger &Huge2){
        int res = stoi(this->integer) + stoi(Huge2.integer);
        char resChar[40];
        snprintf(resChar, sizeof(resChar), "%d", res);
        strcpy(this->integer, resChar);
    }
    
    void operator-=(const HugeInteger &Huge2){
        int res = stoi(this->integer) - stoi(Huge2.integer);
        char resChar[40];
        snprintf(resChar, sizeof(resChar), "%d", res);
        strcpy(this->integer, resChar);
    }
    
    void operator*=(const HugeInteger &Huge2){
        int res = stoi(this->integer) * stoi(Huge2.integer);
        char resChar[40];
        snprintf(resChar, sizeof(resChar), "%d", res);
        strcpy(this->integer, resChar);
    }
    
    void operator/=(const HugeInteger &Huge2){
        int res = stoi(this->integer) * stoi(Huge2.integer);
        char resChar[40];
        snprintf(resChar, sizeof(resChar), "%d", res);
        strcpy(this->integer, resChar);
    }
    
    bool operator==(const HugeInteger &Huge2){
        if(stoi(this->integer) == stoi(Huge2.integer)){
            return true;
        }
        else{return false;}
    }
    
    bool operator!=(const HugeInteger &Huge2){
        if(stoi(this->integer) == stoi(Huge2.integer)){
            return false;
        }
        else{return true;}
    }
    
    bool operator>=(const HugeInteger &Huge2){
        if(stoi(this->integer) >= stoi(Huge2.integer)){
            return true;
        }
        else{return false;}
    }
    
    bool operator<=(const HugeInteger &Huge2){
        if(stoi(this->integer) <= stoi(Huge2.integer)){
            return true;
        }
        else{return false;}
    }
    
    bool operator>(const HugeInteger &Huge2){
        if(stoi(this->integer) > stoi(Huge2.integer)){
            return true;
        }
        else{return false;}
    }
    
    bool operator<(const HugeInteger &Huge2){
        if(stoi(this->integer) < stoi(Huge2.integer)){
            return true;
        }
        else{return false;}
    }
    
    
    
    friend ostream &operator<<( ostream &, const HugeInteger &huge);
    
    
private:
    char integer[40];
};

#endif /* HugeInteger_hpp */
