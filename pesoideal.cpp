#include <iostream>
#include <locale.h>
using namespace std;
//Tendo como dados de entrada a altura de uma pessoa,
//construa um algoritmo que calcule seu peso ideal,
//usando a seguinte fórmula: (72.7*altura) - 58. Para mulheres: (62.1*h) - 44.7

float altura, pesoidealman, pesoidealwoman;
int selecionar;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout<<"Digite 1 se você é homem e 2 se você é mulher\n";
    cin>>selecionar;
    cout<<"Informe sua altura para calcular seu peso ideal: \n";
    cin>>altura;

    switch (selecionar){
        case 1:
            cout<<"Você escolheu a primeira opção!\n";
            pesoidealman=(72.7*altura)-58;
            cout<<"O peso ideal para sua altura é: "<<pesoidealman<<endl;
            break;
        case 2:
            cout<<"Você escolheu a segunda opção!\n";
            pesoidealwoman=(62.1*altura)-44.7;
            cout<<"O peso ideal para sua altura é: "<<pesoidealwoman<<endl;
            break;
        default:
            cout<<"O valor inserido é inválido.";
    }
    
    return 0;
}