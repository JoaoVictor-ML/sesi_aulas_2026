#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int i = 20;
	for(i; i > 1; i-=2){
		printf("%d\n", i);
	}
	getch();
}