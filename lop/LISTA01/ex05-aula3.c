#include <stdio.h>

void main(){
	int n, n1, n2;
	
	printf("Digite um numero inteiro maior que 1: ");
	scanf("%i", &n);
	
	n1 = n - 1;
	n2 = n + 1;
	
	printf("%i + 1 = %i e %i - 1 = %i", n, n2, n, n1);
	
	getch();
}
