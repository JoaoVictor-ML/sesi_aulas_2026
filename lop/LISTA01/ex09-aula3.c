#include <stdio.h>

void main(){
	float p, va, vt;
	char m [50];
	
	printf("Qual o nome da mercadoria? ");
	scanf("%[^\n]", &m);
	
	printf("Qual e o preco da mercadoria? ");
	scanf("%f", &p);
	
	va = (p/100) * 5;
	vt = va + p;
	
	printf("O novo valor de %s sera: %f", m, vt);
	
	getch();
}