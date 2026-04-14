#include<stdio.h>
void main(){
	char time[50];
	int v, e, pontos;
	printf("Digite o nome do time: \n");
	scanf(" %[^\n]", &time);
	printf("Digite o total de vitórias:\n");
	scanf("%d", &v);
	printf("Digite o total de empates:\n");
	scanf("%d", &e);
	
	pontos = v  * 3 + e;
	
	printf("O time %s fez %d pontos.", time, pontos);
	getch();
}