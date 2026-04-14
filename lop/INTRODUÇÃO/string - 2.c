#include <stdio.h>
void main(){
	char nome[100], sobrenome [100];
	printf("Digite seu nome:\n");
	scanf(" %[^\n]", nome);
	fflush(stdin);
	printf("Digite seu sobrenome:\n");
	scanf(" %[^\n]", sobrenome);
	fflush(stdin);
	printf("Seu nome e %s %s", nome, sobrenome);
	getch();
}
