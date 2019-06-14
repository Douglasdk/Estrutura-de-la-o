#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, base, res;
	
	printf("\n Potencias de 0 a 15 do numero 3 \n");
	
	
	base = 3;
	
	for(n=0; n<15; n++){

	res= pow(base,n);
	
	printf("\n %d elevado %d = %d \n", base, n, res);
}
		
	return 0;
}
