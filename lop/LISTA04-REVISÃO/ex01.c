#include <stdio.h>
#include <windows.h>
void main(){
	//  AND &&
	// OR ||
	SetConsoleOutputCP(CP_UTF8);
	char nome[100];
	float p, h, imc;
	printf("Digite seu nome:\n");
	scanf("%[^\n]s", &nome);
	fflush(stdin);
	printf("Digite seu peso:\n");
	scanf("%f", &p);
	printf("Digite sua altura:\n");
	scanf("%f", &h);
	imc = p/h * h;
	if(imc <= 15,5){
		printf("%s você está abaixo do peso", nome);
	}else if(imc >=18,6 && imc <= 24,9){
		printf("%s você está com o peso normal", nome);
	}else if(imc >=30 && imc<= 34,9){
		printf("%s você está com obesidade grau 1", nome);
	}else if(imc >= 35 && imc <=39,9){
		printf("%s você está com obesidade grau 2", nome);
	}else{
		printf("%s você está com obesidade grau 3", nome);
	}
	getch();
}