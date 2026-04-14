#include <stdio.h>

void main(){
	float velocidade, distancia, tempo;
	
	printf("Digite a Velocidade de seu veiculo: ");
	scanf("%f", &velocidade);
	
	printf("Digite a distancia de seu destino: ");
	scanf("%f", &distancia);
	
	tempo = distancia / velocidade;
	
	printf("Sua viagem vai demorar %.2f horas", tempo);

    getch();	
	
}