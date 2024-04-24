#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
//Faça um Programa que peça 2 números inteiros e um número real.
//Calcule e mostre:
//    o produto do dobro do primeiro com metade do segundo.
//    a soma do triplo do primeiro com o terceiro.
//    o terceiro elevado ao cubo.
int number1, number2;
float number3;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Digite 2 números inteiros e 1 número real: \n";
    cin>>number1>>number2>>number3;

    cout<<(number1*2)+number2/2<<endl;
    cout<<(number1*3)+number3<<endl;
    cout<<pow(number3, 3);

    return 0;
}