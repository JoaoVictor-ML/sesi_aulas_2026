#include <stdio.h>

void main(){
	float r, h, a, v;
	
	printf("Qual o raio do circulo? ");
	scanf("%f", &r);
	
	printf("Qual  a altura do cilindro? ");
	scanf("%f", &h);
	
	a = 6.28*r*(r+h);
	v = 3.14*(r*r) * h;
	
	printf("A area: %.2f e o volume: %.2f", a, v);
	
	getch();
}