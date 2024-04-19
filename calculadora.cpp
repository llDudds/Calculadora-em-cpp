#include <iostream>
#include <locale.h>
using namespace std;

float number1, number2, result;
int operacao;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"Digite dois números: ";
	cin>>number1>>number2;
	cout<<"Selecione a operação que deseja fazer:\n 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n";
	cin>>operacao;
	
	switch(operacao){
		case 1:
			cout<<"A operação escolhida foi soma!";
			result=number1+number2;
			cout<<"\nO resultado da soma é: "<<result;
			break;
		case 2:
			cout<<"A operação escolhida foi subtração!";
			result=number1-number2;
			cout<<"\nO resultado da subtração é: "<<result;
			break;
		case 3:
			cout<<"A operação escolhida foi multiplicação!";
			result=number1*number2;
			cout<<"\nO resultado da multiplação é: "<<result;
			break;
		case 4:
			cout<<"A operação escolhida foi divisão!";
			result=number1/number2;
			cout<<"\nO resultado da divisão é: "<<result;
			break;
		default:
			cout<<"A Operação é inválida"<<endl;
	}
	
return 0;
}
