#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome;
    int idade;
    float peso;
    char genero;

    cout<<"Digite Seu Nome: ";
    cin >> nome;
    cout<<"Digite Sua Idade: ";
    cin >> idade;
    cout<<"Digite Seu Peso em kg: ";
    cin >> peso;
    cout<<"Digite Seu Genero: ";
    cin >> genero;

    cout << "\n--- DADOS INSERIDOS ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Peso: " << peso << " kilos" << endl;
    cout << "Genero: " << genero;
    return 0;
}