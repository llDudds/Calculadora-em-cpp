#include <iostream>
#include <locale.h>
using namespace std;

int number;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe um número: ";
    cin>>number;
    cout<<"O número informado foi: "<<number;
    return 0;
}