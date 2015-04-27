#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float agua;
	float mayor;
	float menor;
	float promedio;
	float total=0;
	char bandera=0;
	char i;
	for(i=1;i<=30;i++){
		printf("¿Cuanto milimetros cayo? dia %d\n>",i);
		scanf("%f",&agua);
		fflush(stdin);
		if(bandera==0){
			mayor=agua;
			menor=agua;
			bandera=1;
		}
		if(agua>mayor){
			mayor=agua;
		}if(agua<menor){
			menor=agua;
		}
		total+=agua;
		
	}
	printf("La cantidad  mayor de agua caida es:%.3f\n",mayor);
	printf("La cantidad menor  de agua caida es:%.3f\n",menor);
	printf("El promedio total es %.3f\n",(total/30));
	
	
	return 0;
}
