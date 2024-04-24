#include <iostream>
#include <locale.h>
using namespace std;

float nota1, nota2, nota3, nota4, media;
//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Digite sua primeira, segunda, terceira e quarta nota respectivamente: ";
    cin>>nota1>>nota2>>nota3>>nota4;
    media= (nota1+nota2+nota3+nota4) / 4;
    cout<<"A média é: "<<media;

    return 0;
}