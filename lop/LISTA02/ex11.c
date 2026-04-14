// #include <stdio.h> 
//void main(){
	//char turno; 
	//printf("Digite se turno, M para matutino, V para vespertino, N para noturno");
	//scanf("%c", &turno);
	//if (turno == "M"){
	//	printf("Bom dia!");
	//}else if(turno == "V"){
	//	printf("Boa tarde!");
	//}else if (turno == "N"){
	//	printf("Boa noite!");
	//}else{
	//	printf("turno invalido")
	//}
	//getch();
//}

#include <stdio.h>
int main(){
	char turno[10];
	printf("Digite se turno, \n manha, \n tarde, \n noite\n ");
	scanf("%s", &turno);
	
	if (strcmp(turno,"manha")==0){
		printf("Bom dia");
	}else if(strcmp(turno,"tarde")==0){
		printf("Boa tarde");
	}else if(strcmp(turno,"noite")==0){
		printf("Boa noite");
	}else{
		printf("turno invalido")
	}
	getch();
}