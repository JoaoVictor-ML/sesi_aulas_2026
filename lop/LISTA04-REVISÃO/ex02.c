#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	float p, exc, mt;
	printf("Qual o peso de sua pesca:\n");
	scanf("%f", &p);
	exc = p - 50;
	if(exc > 0){
		mt = exc * 4;
		printf("Voce terá que pagar uma multa de R$%.2f", mt);
	}else{
		printf("Não terá que pagar multar.");
	}
	getch();
}