#include <stdio.h>
void main() {
	int limite = 1000, peso;
	printf("Digite o peso da carga do caminhao: \n");
	scanf("%d", &peso);
	if(peso < limite){
		printf("Boa viagem.\n");
	}else if(peso < limite + 100){
	    printf("Boa viagem, limite excedido dentro da tolerancia.\n");
    }
	else{
		printf("Limite excedido, viagem proibida. \n");
	}	
	getch();
}
