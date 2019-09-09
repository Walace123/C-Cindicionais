#include<stdio.h>
int main(){
	//Entrar com a sigla do estado de uma pessoa
	char sigla;
	printf("Entre com a sigla: ");
		scanf("%c",&sigla);
	//crie condicionais
	if(sigla =='r'){
		printf("Carioca");
	}
	else if(sigla =='s'){
		printf("Paulista");
	}
	else if(sigla =='m'){
		printf("Mineiro");
	}
		
	return 0;
}
