#include <stdio.h>
void main(){
	int i = 20;
	for(i; i > 1; i-=4){
		printf("%d\n", i);
	}
	getch();
}