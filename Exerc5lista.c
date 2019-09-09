//5.	Ler três números 
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Entre com valor para A: ");
	scanf("%d",&a);
	printf("Entre com valor para B: ");
	scanf("%d",&b);
	printf("Entre com valor para C: ");
	scanf("%d",&c);
	if(a>b&&b>c){
		printf("C,B,A");
	}
	else if(b>a&&a>c){
		printf("C,A,B");
	}
	else if(c>b&&b>a){
		printf("A,B,C");
	}
	return 0;
}
