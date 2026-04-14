#include <stdio.h>
void main(){
	int time, pontos;
	printf("Informe os pontos:");
	scanf("%d", &pontos);
	if (pontos >= 20){
		printf("CLASSIFICADO");
	}else if(pontos >= 10 && pontos < 10){
		printf("EM DISPUTA");
	}else{
		printf("ELIMINADO");
	}
	getch();
}