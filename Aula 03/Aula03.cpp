#include <iostream>
#include <string>

using namespace std;

int main(){

    int idade;

    if (idade < 0 || idade >= 120){
    cout << "Idade Invalida\n";
    }
    else if  ((idade >= 16 && idade < 18) || idade >=60){
        cout << "Voto facultativo\n";
    }
    else if (idade >= 18) {
        cout << "Voto Obrigatorio";
    }
    else {
        cout << "Nao pode Votar\n";
    }
    // 00000000000000000000000000000000000000000 


    
    cout << "Informe sua Idade: ";
    cin >> idade;
    if (idade <0 || idade >= 120){
    cout << "Idade Invalida\n"
    }
    else {
    if ((idade >= 16 && idade < 18) || idade .= 60){
        cout << "Voto Facultativo\n";
    }
    else {
        if (idade >=18) {
        cout << "Voto Obrigatorio";
        }
        else {
        cout << "Nao Pode Votar\n";
        }
    }
}
}