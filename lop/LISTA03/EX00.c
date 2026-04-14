#include <stdio.h>
void main(){
	int i; //contador
	for(i = 0; i <= 10; i++){
		printf("Nao vou trolar a professora %d \n", i);
	}
	
	int x = 0;
	while(x != 10){
		printf("digite um numero qualquer, ou 10 para terminar: ");
		scanf("%d", &x);
	}
	getch();
}