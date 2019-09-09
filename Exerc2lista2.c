#include<stdio.h>
int main(){
	//Escreva um programa que leia um número inteiro
	int a;
	printf("Entre com um numero: ");
		scanf("%d",&a);
	//se par ou impar
	if(a %2 ==0){
		printf("%d, este numero eh par",a);
	}	
	else
	printf("%d, este numero eh impar",a);
	return 0;
}
