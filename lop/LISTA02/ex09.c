#include <stdio.h>
void main(){
	int num;
	printf("Digite um numero:\n");
	scanf("%d", &num);
	if (num > 100){
		printf("Seu numero e maior que 100");
	}else{
		printf("Seu numero e menor que 100");
	}
	getch();
}
