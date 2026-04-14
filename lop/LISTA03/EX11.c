#include <stdio.h>
void main(){
	int n;
	printf("digite um numero inteiro positivo:\n");
	scanf("%d", &n);
	for(int i = 1; i < n; i+=2){
		printf("%d, ", i);
	}
	getch();
}