#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,num,numMax,numMin,bandera=0,total=0;
	
	for(i=0;i<20;i++){
	   do{
		printf("Ingrese un numero,va el numero%d\n>",(i+1));
		scanf("%d",&num);
		fflush(stdin);
			if(comprobar(num)==0){
				printf("Error,ingrese otro numero\n");
		}
		}while(comprobar(num)==0);
		total+=num;
		if(bandera==0){
			numMin=num;
			numMax=num;
			bandera=1;
		}if(num>numMax){
			numMax=num;
		}if(num<numMin){
			numMin=num;
		}
	}

	printf("El numero  Maximo es %d\n",numMax);
	printf("El numero  Minimo es %d\n",numMin);
	printf("El Promedio es %d",(total/20));
	
	return 0;
}
