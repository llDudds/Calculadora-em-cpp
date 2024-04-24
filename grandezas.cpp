#include <iostream>
#include <locale.h>
using namespace std;
//Faça um Programa que converta metros para centímetros.
float metros, cm;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Converter metros para centímetros!\n";
    cout<<"Informe a quantidade de metros: ";
    cin>>metros;
    cm=metros*100;
    cout<<"A quantidade de "<<metros<<" metros em centímetros é: "<<cm;

    return 0;
}