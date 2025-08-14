#include <iostream>
#include <string>

using namespace std;
double n;

int main(){
cout << "Calculadora lojista: " << endl;
cout << "Calcule seu desconto de 5%: \n";
cin >> n;
cout << "A Vista: " << (n-n*0.05)<<endl;
cout << "Parcelado: " << (n/5) << endl;
cout << "Comissao: " << ((n-n*0.05)*0.06)<<endl;
}