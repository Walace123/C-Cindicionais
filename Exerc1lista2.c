#include<stdio.h>
int main(){
	//receba 2 numeros
	int a,b,soma;
	printf("Atribua um valor para A: ");
		scanf("%d",&a);
	printf("Atribua um valor para B: ");
		scanf("%d",&b);
	//efetue adi��o
	soma=a+b;
	//crie a condi��o
	if(soma>10){
		printf("%d",soma);
	}
	else
	printf("Valor menor que 10");
	return 0;
}
