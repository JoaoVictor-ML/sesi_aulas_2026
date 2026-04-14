#include <stdio.h>

void main(){
	float  x, y, z;
	printf("Digite um numero real:\n");
	scanf("%f", &x);
	printf("Digite outro numero real:\n");
	scanf("%f", &y);
	
	z = x / y;
	
	printf("O primeiro numero dividido pelo segundo é %.2f", z);
	getch();
}
