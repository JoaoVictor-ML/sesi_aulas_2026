#include <stdio.h>

void main(){
	char nome[100];
	float salario, aumento, ns;
	
	printf("Qual o seu nome? ");
	scanf("%[^\n]", &nome);
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o aumento percentual: ");
	scanf("%f", &aumento);
	
	ns = ((salario/100) * aumento) + salario;
	
	printf("%s seu novo salario com aumento e: %.2f", nome,ns);
	
	getch();
}