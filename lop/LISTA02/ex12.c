#include<stdio.h>
void main(){
	int anonasc, idd;
	printf("Digite seu ano de nascimento:\n");
	scanf("%d", &anonasc);
	idd = 2026 - anonasc;
	if(idd >= 16){
		printf("Pode votar");
	}else{
		printf("Nao pode votar");
	}
}