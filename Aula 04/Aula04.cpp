#include <iostream>

    using namespace std;
    int main (){
    
    //Variavel de controle
    //Condicao
    //Alteracao na variavel de controle (incremento ++) ou decremento (--)

    cout << "Contador de Idades \n\n";

    for (int contador=0; contador < 5; contador++){
    int idade;
    cout << "Informe sua idade "<< contador << ":";
    cin >> idade;

    if (idade >= 18){
    cout << "Voce é maior de idade \n\n";
    }
    else {
        cout << "Voce e menor de idade\n\n";
    }
} 
}


    //{(int main (){
    //cout << "Verificador de idades.\n\n";
    //int idade;
    //cout << "Informe sua idade: ";
    //cin >> idade;
    //if (idade >= 18){
    // cout << "Voce é maior de idade";
    // }
    //else {
    //cout << "Voce e menor de idade";
    // }
    // cout << "Fim da verificacao\n";
    //return 0;)}
