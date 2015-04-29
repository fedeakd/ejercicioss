#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,numeros[20],bandera,aux;
	
	//Ingreso de datos al vector
	for(i=1;i<=20;i++){
		printf("\nIngrese el elemento %d: ",i);
		scanf("%d",&numeros[i]);
		
		if(numeros[i]==0){
			printf("\nEl valor ingresado es 0 el cual no esta permitido, por favor ingrese un numero distinto (Negativos, Positivos): ");
			scanf("%d",&numeros[i]);
		}
		system("cls");	
	}
	
	
	printf("\nLos datos del vector son: ");
	for(i=1;i<=20;i++){
		printf("\nnumeros[%d]= %d",i,numeros[i]);
	}
	
	
		do{
		bandera=0;
		for(i=1;i<20;i++){
			if(numeros[i]<numeros[i+1]){
				aux=numeros[i];
				numeros[i]=numeros[i+1];
				numeros[i+1]=aux;
				bandera=1;
			}
		}
	}while(bandera==1);
	
	printf("\nLos datos del vector positivos ordenados en forma decreciente son: ");
	for(i=1;i<=20;i++){
		if(numeros[i]>0){
			printf("\nnumeros[%d]= %d",i,numeros[i]);
		}
	}

	//ordenamiento y muestra del vector
	do{
		bandera=0;
		for(i=1;i<20;i++){
			if(numeros[i]>numeros[i+1]){
				aux=numeros[i];
				numeros[i]=numeros[i+1];
				numeros[i+1]=aux;
				bandera=1;
			}
		}
	}while(bandera==1);
	
	printf("\nLos datos del vector negativos ordenados en forma creciente son: ");
	for(i=1;i<=20;i++){
		if(numeros[i]<0){
			printf("\nnumeros[%d]= %d",i,numeros[i]);
		}
	}
	return 0;
}
