#include <stdio.h>
void main(){
	int idade;
	printf("Quantos anos voce tem?\n");
	scanf("%d", &idade);
	if (idade > 18){
		printf("Voce e maior de idade");
	}else if (idade < 18){
		printf("Voce e menor de idade");
	}
	else {
		printf("Voce e um recem nascido");
	}
	getch();
}