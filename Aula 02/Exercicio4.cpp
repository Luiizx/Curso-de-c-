#include <iostream>
#include <string>
using namespace std;

int main(){
int numero;
cout << "Este Numero e par ou impar?"<<endl;
cout << "Digite um Numero:  ";
cin >> numero;
string n = (numero%2==0)? " E Par" : " E Impar";
cout << "Este numero: " << numero << n <<endl;
return 0;
}