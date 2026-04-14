#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	float sal, inss, ir, sind,saliq, salbrt;
	printf("Digite o valor de salário:\n");
	scanf("%f", &sal);
	inss = sal * (8.0 /100);
	ir = sal * (11.0/100);
	sind = sal * (5.0/100);
	saliq = sal - inss - ir - sind;
	printf("seu salário bruto é R$%2.f\n", sal);
	printf("Você terá que pagar R$%.2f de inss \n",inss);
	printf("Você terá que pagar R$%.2f de imposto de renda \n",ir);
	printf("Você terá que pagar R$%.2f de sindicato \n",sind);
	printf("Seu salário liquido é R$%2.f", saliq);
	getch();
}