#include <iostream>
#include <locale.h>
using namespace std;

float number1, number2, result;
int operacao;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"Digite dois n�meros: ";
	cin>>number1>>number2;
	cout<<"Selecione a opera��o que deseja fazer:\n 1 - Soma\n 2 - Subtra��o\n 3 - Multiplica��o\n 4 - Divis�o\n";
	cin>>operacao;
	
	switch(operacao){
		case 1:
			cout<<"A opera��o escolhida foi soma!";
			result=number1+number2;
			cout<<"\nO resultado da soma �: "<<result;
			break;
		case 2:
			cout<<"A opera��o escolhida foi subtra��o!";
			result=number1-number2;
			cout<<"\nO resultado da subtra��o �: "<<result;
			break;
		case 3:
			cout<<"A opera��o escolhida foi multiplica��o!";
			result=number1*number2;
			cout<<"\nO resultado da multipla��o �: "<<result;
			break;
		case 4:
			cout<<"A opera��o escolhida foi divis�o!";
			result=number1/number2;
			cout<<"\nO resultado da divis�o �: "<<result;
			break;
		default:
			cout<<"A Opera��o � inv�lida"<<endl;
	}
	
return 0;
}
