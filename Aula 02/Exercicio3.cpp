#include <iostream>
#include <string>
using namespace std;

int main(){

    string nome;
    float peso;
    float altura;
    cout << "CALCULO DE IMC"<< endl;
    cout << "Digite Seu Nome: ";
    cin >> nome ;
    cout << "Digite Seu Peso Em Kilos: ";
    cin >> peso ;
    cout << "Digite Sua Altura em Metros: ";
    cin >>altura;
    string resultado = (peso/(altura*altura)>=18.5) ? " , Normal." : " , Abaixo do normal.";
    cout<<nome<<", Seu imc e: "<< peso/(altura*altura)<< resultado <<endl;
}
    