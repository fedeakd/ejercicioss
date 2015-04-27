#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//float promedio;
	char bandera=0;
	float nota;
	float total=0;
	char nombre[15];
	char resp[4];
	char i;
	do{
		printf("Ingrese el Nombre de un alumno \n>");
		gets(nombre);
		fflush(stdin);
		for(i=1;i<=6;i++){
			do{ 
				printf("Ingrese la nota del alumno: nota %d \n>",i);
	    		scanf("%f",&nota);
	    		fflush(stdin);
				if(nota>10){
					printf("Error la nota no es  mayor de 10\n");
				}
				else if(nota<0){
					printf("Error la nota es menor que 0");
				}
		 
			}while((nota>10)||(nota<0));
    		total+=nota;	
		}
		printf("NOMBRE DEL ALUMNO:%s\tPROMEDIO:%.3f\n ",nombre,((float)total/6));
		total=0;
		printf("Desea continuar  agregando alumnos? \n>");
    	scanf("%s",resp);
    	fflush(stdin);
    	
    
    	system("cls");
		
		
	}while(strcmp(strlwr(resp), "si")==0);
	return 0;
}
