#include <stdio.h>

void main(){
	float distancia, velocidade, tempo;
	
	printf("Qual a velocidade do aviao 747-300? ");
	scanf("%f", &velocidade);
	
	printf("Qual e a distancia que o aviao ira percorrer? ");
	scanf("%f", &distancia);
	
	tempo = distancia / velocidade;
	
	printf("o voo ira demorar %.2f horas", tempo);
	
	getch();
}