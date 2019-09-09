#include<stdio.h>
int main (){
	//ler 3 numeros inteiros
	int a,b,c,menor;
	printf("Entre com valor para A: ");
	scanf("%d",&a);
	printf("Entre com valor para B: ");
	scanf("%d",&b);
	printf("Entre com valor para C: ");
	scanf("%d",&c);
	if(a < b){
		menor=a;
		
	}
	else menor = b;
	if(menor > c){
		menor = c;
	}
	printf("O menor numero eh %d",menor);
	
	return 0;
}
