#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 1; i < 21; i+=1){
		printf("%d\n", i);
	}
	getch();
}