#include <stdio.h>

void main(){
	char time[100];
	float nvit, nemp, pts;
	
	printf("Digite o nome de seu time: ");
	scanf("%[^\n]", &time);
	
	printf("Quantas vitorias o time tem: ");
	scanf("%f", &nvit);
	
	printf("Quantos empates o time tem: ");
	scanf("%f", &nemp);
	
	pts = nvit * 3 + nemp;
	
	printf("O time %s tem %.2f pontos.", time, pts);
	
	getch();
}
