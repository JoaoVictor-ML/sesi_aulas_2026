#include <stdio.h>

void main(){
	float te, tv,pp;
	char n[50];
	
	printf("Qual o nome da cidade? ");
	scanf("%[^\n]", &n);
	
	printf("Quantos eleitores tem? ");
	scanf("%f", &te);
	
	printf("Quantos votos tem? ");
	scanf("%f", &tv);
	
	pp = (tv/te) * 100;
	
	printf("A porcentagem de participacao e: %f", pp);
	
	getch();
		
}