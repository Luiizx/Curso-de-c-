#include <iostream>

using namespace std;
int main(){

int valor;
cout << "Informe o numero: ";
cin >> valor;

for (int multi = 1; multi<= 10; multi++){
    cout << valor <<"*"<<multi<< "=" << valor*multi<< endl;
}
}