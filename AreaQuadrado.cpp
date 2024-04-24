#include <iostream>
#include <locale.h>
using namespace std;

float lado, area, dobro, metros;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe o lado do quadrado em centímetros: \n";
    cin>>lado;
    area=lado*lado;
    dobro=area*2;
    cout<<"O dobro da área do quadrado em centímetros é: "<<dobro<<"cm^2";
    metros=dobro/100;
    cout<<"e o dobro em metros é: "<<metros<<"m^2";

    return 0;
}