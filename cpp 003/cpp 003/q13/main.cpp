//#include <iostream>
//#include "ArrayList Rev.hpp" // Certifique-se de incluir o cabeçalho correto
//
//using namespace std;
//
//int main() {
//    ArrayList arr(5); // Cria um ArrayList com tamanho 5
//
//    // Adiciona alguns elementos
//    arr.add(10).add(20).add(30).add(40).add(50);
//
//    cout << "ArrayList inicial: ";
//    arr.print(); // Imprime o ArrayList original
//
//    // Teste as operações de modificação
//    somaArray(arr, 5);
//    cout << "ArrayList após soma: ";
//    arr.print();
//
//    subArray(arr, 15);
//    cout << "ArrayList após subtração: ";
//    arr.print();
//
//    mulArray(arr, 2);
//    cout << "ArrayList após multiplicação: ";
//    arr.print();
//
//    divArray(arr, 5);
//    cout << "ArrayList após divisão: ";
//    arr.print();
//
//    // Teste as operações de busca e remoção
//    int elementoProcurado = 16;
//    int resultadoBusca = buscaArray(arr, elementoProcurado);
//    if (resultadoBusca != -1) {
//        cout << "Elemento " << elementoProcurado << " encontrado no índice " << resultadoBusca << endl;
//    } else {
//        cout << "Elemento " << elementoProcurado << " não encontrado." << endl;
//    }
//
//    int indiceRemocao = 2;
//    if (removeArray(arr, indiceRemocao) == 0) {
//        cout << "Remoção do elemento no índice " << indiceRemocao << " realizada com sucesso." << endl;
//    } else {
//        cout << "Falha na remoção do elemento no índice " << indiceRemocao << "." << endl;
//    }
//    arr.print();
//
//    int elementoParaRemover = 16;
//    int i=0;
//    int resultadoRemocao = removeElArray(arr, elementoParaRemover, i);
//    if (resultadoRemocao == 0) {
//        cout << "Remoção do elemento " << elementoParaRemover << " realizada com sucesso." << endl;
//    } else {
//        cout << "Falha na remoção do elemento " << elementoParaRemover << "." << endl;
//    }
//
//    cout << "ArrayList final: ";
//    arr.print(); // Imprime o ArrayList após as operações
//
//    return 0;
//}
