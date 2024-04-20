#include <iostream>
#include <locale.h>
using namespace std;

float celsius, fahrenheit;
int escolha;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"Programa para converter fahrenheit em celsius \n";
	cout<<"1 para converter fahrenheit para celsius\n";
	cout<<"2 para converter celsius para fahrenheit\n";
	cin>>escolha;
	
	switch(escolha)
	{
		case 1:
			cout<<"Você escolheu a opção de converter fahrenheit para celsius\n";
			cout<<"Digite o número da temperatura em fahrenheit: ";
			cin>>fahrenheit;
			celsius = (fahrenheit - 32) / 1.8;
			cout<<"A temperatura em celsius é: "<<celsius;
			break;
		case 2:
			cout<<"Você escolheu a opção de converter celsius para fahrenheit\n";
			cout<<"Digite o número da temperatura em celsius: ";
			cin>>celsius;
			fahrenheit = (celsius * 1.8) + 32;
			cout<<"A temperatura em fahrenheit é: "<<fahrenheit;
			break;
		default:
			cout<<"O valor insérido é inválido.";
	}
return 0;
}
