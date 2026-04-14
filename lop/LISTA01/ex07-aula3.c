#include <stdio.h>

void main(){
	float a, c, v;
	
	printf("Quantos alqueires tem na fazenda? ");
	scanf("%f", &a);
	
	printf("Quantos caminhoes estao disponiveis? ");
	scanf("%f", &c);
	
	v = a * 250 / (c * 18);
	
	printf("Precisara de %.2f viagens", v);
	
	getch();
}