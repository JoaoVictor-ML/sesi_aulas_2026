#include <stdio.h>
void main(){
	int n1, n2, n3;
	printf("Digite tres numeros inteiros:\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1 == n2 && n1 == n3){
		printf("Todos os valores sao iguais");
	}
	else if (n1 > n2 && n1 >n3){
		printf("%d e o maior valor", n1);
	}else if(n2 > n1 && n2 > n3){
		printf("%d e o maior valor", n2);
	}else{
		printf("%d e o maior valor", n3);
	}
	getch();
}