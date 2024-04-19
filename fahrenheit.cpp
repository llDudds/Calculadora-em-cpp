#include <iostream>
#include <locale.h>
using namespace std;

float celsius, fahrenheit;
int escolha;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"Programa para converter fahrenheit em celsius\n";
	cout<<"1 para converter fahrenheit para celsius\n";
	cout<<"2 para converter celsius para fahrenheit\n";
	cin>>escolha;
	
	switch(escolha)
	{
		case 1:
			cout<<"Digite a temperatura em celsius: ";
			cin>>celsius;
			fahrenheit = (celsius * 1.8) + 32;
			cout<<"A temperatura em fahrenheit é: "<<fahrenheit;
			break;	
		case 2:
			cout<<"Digite a temperatura em fahrenheit: ";
			cin>>fahrenheit;
			celsius = (fahrenheit - 32) / 1.8;
			cout<<"A temperatura em celsius é: "<<celsius;
			break;	
		default:
			cout<<"A Operação é inválida"<<endl;
	}
return 0;
}
