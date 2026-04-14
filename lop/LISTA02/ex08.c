#include <stdio.h>
void main(){
	float valor, desconto, valorf;
	printf("Digite o valor de sua compra:\n");
	scanf("%f", &valor);
	if (valor > 500){
		desconto = 10;
		valorf = valor - valor * desconto/100; 
		printf("%.2f e o valor descontado", valorf);
	}else if(valor > 200 && valor <=500){
		desconto = 5;
		valorf = valor - valor * desconto/100;
	}else{
		printf("%.2f seu valor nao contem desconto", valor);
	}
	getch();
}