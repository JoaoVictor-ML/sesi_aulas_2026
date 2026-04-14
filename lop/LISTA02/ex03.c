#include <stdio.h>
void main(){
	float nt1, nt2, nt3, media;
	printf("Digite suas tres notas:\n");
	scanf("%f %f %f", &nt1, &nt2, &nt3);
	media = (nt1 + nt2 + nt3)/ 3;
	if (media >= 7){
		printf(" Sua media foi %.2f,APROVADO", media);
	}else{
		printf("Sua media foi %.2f,REPROVADO", media);
	}
	getch();
}