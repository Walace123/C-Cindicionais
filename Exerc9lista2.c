//pedir o valor do salario do usuario
//pedir o valor da prestação de um emprestimo
//se for 20% maior que o salario imprimir (Emprestimo nao concedido) ou se contrario imprima(Emprestimo concedido);
#include<stdio.h>
int main(){
	float salario,valorEmp,condicao;
	printf("Qual valor do salario: ");
		scanf("%f",&salario);
	printf("Qual valor de sua prestacao do emprestimo? ");
		scanf("%f",&valorEmp);
	condicao=salario*0.20;
	if(valorEmp >= condicao)
	{
		printf("Emprestimo nao concedido!");
	}
	else
	{
	printf("Emprestimo concedido!");
	}
	
	return 0;
}
