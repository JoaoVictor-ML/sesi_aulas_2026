#include <stdio.h>
void main(){
	int i;
	while(i != 4){
		printf("Digite um numero:\n");
		scanf("%d", &i);
		if(i != 4){
			printf("O quadrado do seu numero e: %d\n", (i*i));	
		}else{
			printf("Acertou!");
		}
	}
	getch();
}