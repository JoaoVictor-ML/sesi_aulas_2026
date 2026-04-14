# include <stdio.h>
void main(){
	float salario, reajuste, salarioreajustado;
	printf("Informe seu salario:\n");
	scanf("%f", &salario);
	if (salario <= 1800){
		salarioreajustado = salario + (salario/100*15);
	}else{
		salario = salario + (salario/100*10);
	}
	printf("seu novo salario sera %.2f", salarioreajustado);
	getch();
}