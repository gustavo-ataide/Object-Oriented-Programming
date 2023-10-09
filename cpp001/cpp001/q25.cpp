//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int maiuscula_sn(string &palavra){
//    char alfabeto_maiusculo[] = {'A','B','C','D','E','F', 'G', 'H', 'I', 'J','K', 'L', 'M','N','O','P', 'Q','R','S','T', 'U','V', 'W', 'X','Y', 'Z'};
//
//    char alfabeto_minusculo[] = {'a','b','c','d','e','f', 'g', 'h', 'i', 'j','k', 'l', 'm','n','o','p', 'q','r','s','t', 'u','v', 'w', 'x','y', 'z'};
//
//    for(int i=0; i< palavra.length(); i++){
//        for (int letra = 0; letra < 26; letra ++){
//            if (palavra[i] == alfabeto_maiusculo[letra]){
//                palavra [i] = alfabeto_minusculo[letra];
//                
//            }
//        }
//    }
//    return 0;
//}
//
//int main (void){
//
//
//    string word;
//    string &pala = word;
//    cout << "Digite uma palavra: " << endl;
//    cin >> word;
//    int resultado = maiuscula_sn(pala);
//    cout << pala << endl;
//
//}
