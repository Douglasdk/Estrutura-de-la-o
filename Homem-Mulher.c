
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float alt, md, maior, menor, porc,porch,porcm,altm = 0; 
	int  hom = 0, mul = 0,parar = 5,total = 0;
	char sex; 
	
	while(parar!=0){

	
	printf("\n Digite M para masculino e F para feminino \n");
	scanf("%s", &sex);
	printf("\n Digite sua altura \n");
	scanf("%f", &alt);
	
	if(sex == 'm'){
		hom++;
	}
	else {
		mul++;
		altm= altm + alt;
		
	}
	
	if(total == 0){
		maior=alt;
		menor=alt;
		
	}
	if(alt > maior){
		maior=alt;
		
	}
	if(alt < menor){
		menor=alt;
		
	}
	

	total++;
	
	printf("\n Digite 0 para sair \n");
	printf("\n Digite qualquer coisa para continuar \n");
	scanf("%d",&parar);	
		
}
md = altm/mul;
porch = (hom * 100)/total;
porcm = (mul * 100)/total;
porc= porch - porcm;
printf("\n \n total %d",total);
printf("\n \n homem %d", hom);
printf("\n \n  mulher %d", mul);
printf("\n \n menor %f", menor);
printf("\n \n maior %f", maior);
printf("\n \n diferenca de percentual %f", porc);


	return 0;
}
