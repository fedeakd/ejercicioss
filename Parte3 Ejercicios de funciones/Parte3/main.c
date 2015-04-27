#include <stdio.h>
#include <stdlib.h>

#include "libreria.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nom[25],resp[2],i=1,gruponom[500][50];
	int hora[2]={-1,-1},legajo,c,grupolegajo[500],contlegajo=0;
	for(c=0;c<500;c++){
		grupolegajo[c]=-1;
	}
	do{
		printf("Indique  el nombre del empleado\n>");
		gets(nom);
		fflush(stdin);
		
		do{
			printf("Ingrese un legajo \n>");
			scanf("%d",&legajo);
			fflush(stdin);
			if(validarlegajo(grupolegajo,legajo)==0){
				printf("Error\n");
			}
		}while(validarlegajo(grupolegajo,legajo)==0);
		grupolegajo[contlegajo]=legajo;
		contlegajo++;
		
	
		do{
			printf("Ingrese una hora ej 14:30\n>");
			scanf("%d:%d",&hora[0],&hora[1]);
			fflush(stdin);
			if(horaLlegada(hora)==0){
				printf("Error\n");
			}
		}while(horaLlegada(hora)==0);
		
		if((hora[0]>9)){
			strcpy(gruponom[i],nom);
			i++;
			
		}
		else if((hora[0]==9)&&(hora[1]>10)){
			strcpy(gruponom[i],nom);
			i++;
			
		}
		
		printf("Desas continuar? si/no \n");
		scanf("%s",resp);
		fflush(stdin);
		system("cls");
		}while(strcmp(strlwr(resp), "si")==0);
	ordena(gruponom);
	printf("Los empleado que llegaron  despues de las 9:10 son\n");
	for(c=1;c<i;c++){
		printf("%s\n",gruponom[c]);
		
		}
	
	return 0;
}
