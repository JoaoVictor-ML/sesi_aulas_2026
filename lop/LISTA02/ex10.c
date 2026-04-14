#include <stdio.h>
void main(){
	int idd;
	printf("Digite sua idade:\n");
	scanf("%d", &idd);
	if(idd < 12){
		printf("CRIANÇA");
	}else if(idd >= 12 && idd< 18){
		printf("ADOLESCENTE");
	}else{
		printf("ADULTO");
	}
	getch();
}