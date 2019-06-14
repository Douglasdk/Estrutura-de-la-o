#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n,x,res;
	
	printf ("\n Digite o numero para ser mostrada a tabuada \n");
	scanf("%d", &x);
	
	for(n= 1; n <=10; n++){
		
		res = n*x;
		
		printf("\n %d x %d = %d", x,n,res);
		
	}

	
	
	return 0;
}
