#include <stdio.h>
void main(){
	float n;
	char par, impar;
	printf("Informe seu numero:\n");
	scanf("%f", &n);
	
	while(n > 1){
		n = n / 2;
	}
	printf("Seu numero: %f", n);
	
	getch();
}
