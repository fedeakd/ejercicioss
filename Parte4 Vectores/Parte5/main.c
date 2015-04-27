#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mes=31,i=0,meses[32]={0},num,mayor=0,p,fecha,mayordia=0;
	char resp[2];
	do{
		printf("Ingrese el numero del mes ej Enero=1 febrero=2....\n>");
		scanf("%d",&fecha);
		fflush(stdin);
		if((fecha<0)||(fecha>12)){
			printf("Error fecha fuera de rango\n");
		}
		
		
	}while((fecha<0)||(fecha>12));
	mes=sacarMes(fecha);
	while(i<mes){
		printf("Indique si realizo  alguna compra  hoy dia:%d \n>",(i+1));
		scanf("%s",resp);
		fflush(stdin);
		while(strcmp(strlwr(resp), "si")==0){
			do{
				printf("Ingrese lo que gasto de hoy\n>");
				scanf("%d",&num);
				meses[i]+=num;
				if(num<1){
					printf("Error numero  no correcto \n");
			}
			}while(num<1);
			printf("Indique si realizo  alguna otra compra  hoy dia:%d \n>",(i+1));
			scanf("%s",resp);
			fflush(stdin);
		}
		system("cls");
		
		i++;
	}
	for(p=0;p<mes;p++){
		if(meses[p]>meses[p+1]){
			mayor=meses[p];
			mayordia=p+1;
		
		}
	}
	printf("el dia  con mas gasto fue el dia %d con $%d",mayordia,mayor);
	return 0;
}
