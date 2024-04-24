#include <iostream>
#include <locale.h>
using namespace std;
//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
double raio, area, metros;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe o raio do círculo em centímetros: \n";
    cin>>raio;
    area=3.14 * (raio * raio);
    cout<<"A área do circulo é: "<<area<<"cm^2\n";
    metros=area/100;
    cout<<"e a quantidade em metros é: "<<metros<<"m^2";

    return 0;
}