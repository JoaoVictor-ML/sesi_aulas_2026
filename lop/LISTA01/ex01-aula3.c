#include <stdio.h>

void main(){
	float a, b, c, res;
	
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	res = (a+b)/c;
	
	printf("(A + B) / C => %.2f", res);
	
	getch();	
}
