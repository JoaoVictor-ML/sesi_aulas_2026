#include <stdio.h>
void main(){
	char nome[40], sobrenome [40];
	printf("Digite seu nome:\n");
	scanf("%s", nome);
	printf("Digite seu sobrenome:\n");
	scanf("%s", sobrenome);
	printf("Seu nome e %s %s", nome, sobrenome);
	getch();
}
