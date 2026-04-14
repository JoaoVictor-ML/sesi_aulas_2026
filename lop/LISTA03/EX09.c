#include <stdio.h>
void main(){
	int r, nt, res;
	for(nt = 1; nt <= 10; nt++){
		printf("\ntabuada do %d\n", nt);
		
		for(r = 1; r <= 10; r++){
		res = r * nt;
		printf("%d X %d = %d\n", r, nt, res);
		
	}
	printf("\n");
}
getch();
}