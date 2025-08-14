#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome;
    int nota;
    float a,b,c; 
    cout << "Nome: ";
    cin >>nome;
    cout << "Digite suas ultimas tres notas: "<<endl;
    cout <<"Nota 1: ";
    cin >> a ;
    cout <<"Nota 2: ";
    cin >> b ;
    cout << "Nota 3: ";
    cin >> c ;
    cout << "Sua Media Final "<<nome<<" foi: "<<(a+b+c)/3;
    return 0;
}