#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	float total = 0, preco, qtd, desc, ntotal;
	char resp;
	do {
		printf("Digite o preço de seu produto:\n");
		scanf("%f", &preco);
		printf("Digite a quantidade de produtos:\n");
		scanf("%f", &qtd);
		fflush(stdin);
		total = total + preco * qtd;
		printf("Mais algum produto?\n");
		scanf("%c", &resp);
		fflush(stdin);
	}while(resp == 's');
	printf("O total de seu orçamento é %.2f \n", total);
	printf("Digite uma porcentagem para seu desconto:\n");
	scanf("%f", &desc);
	ntotal = total * (desc/100);
	printf("Seu valor total é R$%.2f e com o desconto é R$%.2f", total, ntotal);
	getch();
}