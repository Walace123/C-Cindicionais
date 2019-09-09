//entre com 3 notas de alunos
#include<stdio.h>
int main (){
	float av1,av2,media;
	printf("Entre com AV1: ");
	scanf("%f",&av1);
	printf("Entre com AV2: ");
	scanf("%f",&av2);
	//calcular media
	media=(av1+av2)/2;
	if(media>=6){
		printf("Aprovado");
	}
	else if(media<6&&media>3){
		printf("Av3");
	}else {
	printf("Reprovado");
}
	
	
	return 0;
}
