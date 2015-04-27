#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "libreria.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nom[10][50],i,resp[2],editnom[30],valor[50];
	int fecha[10][3],edad[10],pos=-1,totalfecha[10];
	for(i=0;i<10;i++){
		fecha[i][0]=-1;
		fecha[i][1]=-1;
		fecha[i][2]=-1;
		edad[i]=-1;
	}
	for(i=0;i<10;i++){
		do{
		
			printf("Ingrese el nombre n:%d\n>",(i+1));
			gets(nom[i]);
			fflush(stdin);
			if(comparar(nom[i],nom,i)==0 ){
				printf("Nombre repetido\n");
			}
		}while(comparar(nom[i],nom,i)==0 );
		do{
			printf("Ingrese  fecha de ingreso ej 12/12/1993\n>");
			scanf("%d/%d/%d",&fecha[i][0],&fecha[i][1],&fecha[i][2]);
			//printf("%d/%d/%d",fecha[0],fecha[1],fecha[2]);
			fflush(stdin);
			if(sacarFecha(fecha[i])==0){
				printf("Error,FECHA incorrecta\n");
			}}while(sacarFecha(fecha[i])==0);	
			
		
	}//Parte uno  ingreso

	printf("¿Deseas editar alguna fecha?\n>");
	scanf("%s",resp);
	fflush(stdin);
	while(strcmp(strlwr(resp), "si")==0){//Parte dos
		printf("Ingrese el nombre que deseas editar\n>");
		gets(editnom);
		fflush(stdin);
		for(i=0;i<10;i++){
			//printf("%s\n",nom[i]);
			if((strcmp(nom[i],editnom)==0)||(strcmp(nom[0],editnom))){
				pos=i;
				break;
				
				}
			
		}
		if(pos==-1){
			printf("Nombre no encontrado\n");
		}
		else{
		
			printf("La fecha es %d/%d/%d\n",fecha[pos][0],fecha[pos][1],fecha[pos][2]);
			do{
				printf("Ingrese  la nueva fecha ej 12/12/1993\n>");
				scanf("%d/%d/%d",&fecha[pos][0],&fecha[pos][1],&fecha[pos][2]);
				fflush(stdin);
				if(sacarFecha(fecha[pos])==0){
					printf("Error,FECHA incorrecta\n");
				}}while(sacarFecha(fecha[pos])==0);
			printf("Fecha cambia correctamente\n");
		}
			printf("¿Deseas editar alguna fecha?\n>");
			scanf("%s",resp);
			fflush(stdin);
			pos=-1;
		}//Parte dos editar nombre
		
		
		calcularEdad(fecha,edad);
		ordenarEdad(nom,fecha,edad);
		printf("Nombre     fecha      anio\n");
		for(i=0;i<10;i++){
			printf("%s \t ",nom[i]);
			printf("%d/%d/%d\t",fecha[i][0],fecha[i][1],fecha[i][2]);
			printf("%d\n",edad[i]);
		}//parte 3 mostrar en pantalla
	
	
	return 0;
}
