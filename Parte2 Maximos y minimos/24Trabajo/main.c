#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char Apellido[15];
	char Nombre[15];
	char total[40];
	char resp[10];
	float altura=0;
	float alto;
	
	do{
		printf("Ingrese el apellido de un alumno \n>");
		gets(Apellido);
		fflush(stdin);
		printf("Ingrese el Nombre de un alumno \n>");
		gets(Nombre);
		fflush(stdin);
		do{
			if(altura>3||altura<0){
				printf("Altura incorrecta \n");
			}
			printf("Ingrese la altura de ese alumno \n>");
			scanf("%f",&altura);
			fflush(stdin);
		}while(altura>3||altura<0);
		if(altura>alto){
			strcpy(total,Nombre);
			alto=(float)altura;
		}
		system("cls");

		printf("Desas continuar? si/no \n");
		scanf("%s",resp);
		fflush(stdin);		
		
	}while(strcmp(strlwr(resp), "si")==0);
	printf("El alumno mas alto es %s  y mide;%.3f",total,alto);
	return 0;
}
