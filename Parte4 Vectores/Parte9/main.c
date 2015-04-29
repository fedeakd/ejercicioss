#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  legajoComprobar[100],legajo[100],i,edad[100]={-1},legajoSuper[100],legajoSuper2[100],cont=0,cont2=0;
	int  numLegajo;
	float saldo[100],edadProm=0,saldoProm=0;
	for(i=0;i<100;i++){
		legajo[i]=i+1;
		legajoSuper[i]=-1;
		edad[i]=-1;
		legajoComprobar[i]=-1;
		legajoSuper2[i]=-1;
	    //printf("%d\n",legajoComprobar[i]);
	}
	while(ingesoValidar(legajoComprobar)==0){
		do{
		printf("Ingrese el numero de legajo \n");
		scanf("%d",&numLegajo);
		numLegajo--;
		printf("%d\n",legajoComprobar[numLegajo]);
		if((numLegajo<0)||(numLegajo>100)){
			printf("Error,re ingrese el legajo\n");
		}
		if(legajoComprobar[numLegajo]!=-1){
			printf("Error legajo repetido\n");
		}
		}while((numLegajo<0)||(numLegajo>100)||(legajoComprobar[numLegajo]!=-1));
		legajoComprobar[numLegajo]=0;
		
		
		do{
			printf("indique la edad\n>");
			scanf("%d",&edad[numLegajo]);
			fflush(stdin);
			if((edad[numLegajo]<0)||(edad[numLegajo]>100)){
				printf("Error de edad\n");
			}
		}while((edad[numLegajo]<0)||(edad[numLegajo]>100));
	    
	    do{
			printf("indique el saldo\n>");
			scanf("%f",&saldo[numLegajo]);
			fflush(stdin);
			if(saldo[numLegajo]<1){
				printf("Error de saldo\n");
			}
		    }while((saldo[numLegajo]<1));
		edadProm+=edad[numLegajo];
		saldoProm+=saldo[numLegajo];
		system("cls");
	}
		
	edadProm=edadProm/100;
	saldoProm=saldoProm/100;
	printf("promedio edad %f  saldo %f",edadProm,saldoProm);

	for(i=0;i<100;i++){
		if(edad[i]>edadProm){
			legajoSuper[cont]=legajo[i];
			cont++; 
			}
		if(saldo[i]>saldoProm){
			legajoSuper2[cont2]=legajo[i];
			cont2++;
			
		}
			
		 }
	for(i=0;i<100;i++){
		printf("superior legajo n:%d\n",legajoSuper[i]);
	}
	
	for(i=0;i<100;i++){
		printf("superio saldo n:%d\n",legajoSuper2[i]);
	}
	
	
	return 0;
}
