#include <iostream>
using namespace std;

int main(){

int idade;
int ano;

cout << "VERIFICADOR DE IDADES: \n";
cout << "Digite seu ano de nascimento: \n";
cin >> idade;
cout << "Digite o Ano Atual: \n";
cin >> ano;

    if (ano-idade<0 || ano-idade>120){
        cout << "Idade INVALIDA ";
    } else {
        cout << "Voce tem: " << ano-idade;
    } if (ano-idade<18){
        cout << " E nao pode dirigir ";
    } else {
        cout << " E Pode dirigir ";
    }
    return 0;
}