#include <stdio.h>

void main(){
	int a, b, c;
	printf("Digite um numero inteiro:");
	scanf("%d", &a);
	printf("Digite outro numero inteiro:");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("A soma dos numeros é %d",c);
	getch();
}
