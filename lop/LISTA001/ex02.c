#include <stdio.h>
void main(){
	float velocidade, distancia, horas, minutos; // 3.5
	int horas2, minutos2; // 3
	printf("Digite a velocidade e a distancia:\n");
	scanf("%f %f", &velocidade, &distancia); 
	horas = distancia / velocidade; // total de horas float
	minutos = distancia / velocidade * 60; //total de minutos float
	horas2 = distancia / velocidade; // total de horas inteiro
	minutos2 = (horas - horas2) * 60; // total de minuto inteiro
	printf("A viagem vai demorar %.2d hora(s) e %.2d minuto(s)", horas2, minutos2);
	getch();	
}
