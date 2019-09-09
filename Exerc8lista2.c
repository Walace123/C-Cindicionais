//pedir um numero ao usuario
//verificar se compreende entre 20 e 90, ou se não esta entre
#include<stdio.h>
int main(){

int num;
	printf("Entre com um numero: ");
	scanf("%d",&num);
	if(num > 20 && num < 90){
		printf("Numero existente entre 20 e 90!");
	}
	else{
		printf("Nao se encontra entre 20 e 90!");
	}
	return 0;
}
