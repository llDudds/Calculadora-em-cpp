#include <iostream>
#include <locale.h>
using namespace std;
//Faça um Programa que pergunte quanto você ganha por hora e o número de horas 
//trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
float horasmes, salariohora, salariototal;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Quanto você ganha por hora? \n";
    cin>>salariohora;
    cout<<"Quantas horas trabalha por mês? ";
    cin>>horasmes;
    salariototal=horasmes*salariohora;
    cout<<"Por mês você ganha: R$"<<salariototal;

    return 0;
}