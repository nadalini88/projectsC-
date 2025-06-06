#include <iostream>

using namespace std;

int main() {
    float numero, resultado;
    char operacao;
    char continuar = 's';
    bool primeiraVez = true;

    while (continuar == 's' || continuar == 'S'){
            if (primeiraVez){
    cout << "Olá, mundo em C++!" << endl;
    cout << "Favor fornecer o primeiro numero: ";
    cin >> resultado;
    primeiraVez = false;
    }
    cout << "Favor fornecer o segundo numero :";
    cin >> numero;
    cout << "Digite a operacao (+, -, *, /): ";
    cin >> operacao;

    switch (operacao) {
    case '+':
            resultado = resultado + numero;
            break;
    case '-':
            resultado = resultado - numero;
            break;
    case '*':
            resultado = resultado * numero;
            break;
    case '/':
            if (numero == 0 ){
                cout <<"Erro: divisao por zero nao e permitida." << endl;
                continue;
            }
            resultado = resultado / numero;
            break;
    default:
            cout << "operacao invalida!";
            continue;
    }
    cout << "Resultado :" << resultado << endl;

    cout <<"Deseja fazer outra operacao? (s/n): ";
    cin >> continuar;
    cout << endl;
}
    cout << "Programa encerrado. Obrigado!";
    return 0;
}
