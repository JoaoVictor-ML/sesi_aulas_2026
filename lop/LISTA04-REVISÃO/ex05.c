#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	float media, nota;
	printf("Quantas notas o aluno possui?\n");
	scanf("%d", &n);
	media = 0;
	for(int i=1; i<=n; i++){
		printf("Digite  a nota %d:\n", i);
		scanf("%f", &nota);
		media = media + nota;
	}
	media = media / n;
	printf("A média final do aluno é %.2f", media);
	getch();
}
