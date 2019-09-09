//entrear com salario do usuario
//imprimir o valor descontado inss segundo tabela
//<600 isento
//>600<=1200 -20%
//>1200<=2000 - 25%
//>2000 - 30%
#include<stdio.h>
int main(){
	float salario,desconto20,desconto25,desconto30;
	printf("Entre com o valor do Salario: ");
	scanf("%f",&salario);
	if(salario < 600){
		printf("Isento desconto INSS!");
	}
	else if(salario > 600 && salario <= 2000){
		desconto20=salario*20/100;
		printf("Salario final descontado imposto e de: %2.f",salario-desconto20);
	}
	else if(salario > 1200 && salario <=2000){
		desconto25=salario*0.25;
		printf("Salario final descontado imposto e de: %2.f",salario-desconto25);
	}
	else if(salario > 2000){
		desconto30=salario*30/100;
		printf("Salario final descontado imposto e de: %2.f",salario-desconto30);
	}
	return 0;
}

