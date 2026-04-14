#include <stdio.h>
void main(){
	int num;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num);
	if (num >= 0){
		printf("Seu numero e POSITIVO");
	} else{
		printf("Seu numero e NEGATIVO");
	}
	getch();
}