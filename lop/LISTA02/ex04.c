#include <stdio.h>
void main(){
	int n1, n2;
	printf("Digite dois numeros:\n");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2){
		printf("%d e o maior", n1);
	}else if (n1 == n2){
		printf("Ambos sao iguais");
	} else{
		printf("%d e o maior", n2);
	}
	getch();
}