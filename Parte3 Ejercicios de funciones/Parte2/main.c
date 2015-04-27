#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "libreria.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a,sueldo,ban=0,sueldoMax;
	int fecha[3],antiguaFecha[3]={99,999,9999};
	char nombre[20],nombreMax[20];	

	for(a=0;a<5;a++){
		for(i=0;i<3;i++){
			fflush(stdin);
			fecha[i]=-1;
		}
		//printf("%d/%d/%d",antiguaFecha[0],antiguaFecha[1],antiguaFecha[2]);
		printf("Ingrese el nombre del empleado,empleado n:%d\n>",(a+1));
		gets(nombre);
		fflush(stdin);
		do{
			printf("Ingrese el sueldo del Empleado\n>");
			scanf("%d",&sueldo);
			fflush(stdin);
			if(sacarSueldo(sueldo)==0){
				printf("Error,sueldo incorrecto\n");
			}
		}while(sacarSueldo(sueldo)==0);
		
		do{
			printf("Ingrese  fecha de ingreso ej 12/12/1993\n>");
			scanf("%d/%d/%d",&fecha[0],&fecha[1],&fecha[2]);
			printf("%d/%d/%d",fecha[0],fecha[1],fecha[2]);
			fflush(stdin);
			if(sacarFecha(fecha)==0){
				printf("Error,FECHA incorrecta\n");
			}
		}while(sacarFecha(fecha)==0);
		if(fecha[2]<antiguaFecha[2]){
			sueldoMax=sueldo;
			strcpy(nombreMax,nombre);
			for(i=0;i<3;i++){
				antiguaFecha[i]=fecha[i];
				}
		}else{
			if(fecha[2]==antiguaFecha[2]){
				if(fecha[1]<antiguaFecha[1]){
					sueldoMax=sueldo;
					strcpy(nombreMax,nombre);
					for(i=0;i<3;i++){
						antiguaFecha[i]=fecha[i];
					}
					}
				else{
					if(fecha[1]==antiguaFecha[1]){
						if(fecha[0]<antiguaFecha[0]){
							sueldoMax=sueldo;
							strcpy(nombreMax,nombre);
							for(i=0;i<3;i++){
								antiguaFecha[i]=fecha[i];
							}	
						}
					}
				}
				}
			}
			system("cls");
		}
	printf("El sueldo mas antiguo es $%d de %s con la fecha %d/%d/%d",sueldoMax,nombreMax,antiguaFecha[0],antiguaFecha[1],antiguaFecha[2]);
		
	
	
	return 0;
}
