#include <stdio.h>
void main(){
	int n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	for(n; n>0; n-=2){
		printf("%d\n", n);
	}
	getch();
}