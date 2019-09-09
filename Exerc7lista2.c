//pedir 1 numero ao usuario
//verificar se este numero é divisivel por 10,por 5 ou por 2 ou se não é divisivel por nunhum destes
#include<stdio.h>
int main(){
	int num;
	printf(" Entre com um numero: ");
	scanf("%d",&num);
	if(num % 10 == 0 && num % 2 == 0){
		printf("Este numero eh divisivel por 10 e por 2!\n");
	    }
		else if(num % 5 == 0){
			printf("Este numero eh divisivel por 5!\n");
		}
		else if(num % 2 == 0){
			printf("Este numero eh divisivel por 2!\n");
		}
		else
		{
		printf("Numero nao divisivel por 10,5 e2!");
	    }
		
	return 0;
}
