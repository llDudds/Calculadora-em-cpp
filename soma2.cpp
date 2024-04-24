#include <iostream>
#include <locale.h>
using namespace std;

int number1, number2, result;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Para a soma, informe o primeiro número: ";
    cin>>number1;
    cout<<"Informe o segundo número: ";
    cin>>number2;
    result = number1 + number2;
    cout<<"O resultado da soma entre "<<number1<<" e "<<number2<<" é:"<<result;

    return 0;
}