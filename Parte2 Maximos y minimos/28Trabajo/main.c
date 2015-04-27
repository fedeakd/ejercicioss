#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float tarifa;
	int  hora;
	char nombre[20],contador=1,resp[4];
	do{
		printf("Empleado n:%d\n",contador);
		printf("Ingrese el Nombre del empleado \n>");
		gets(nombre);
		fflush(stdin);
		
		do{
			if(hora>168){
				printf("Error  ingrese nuevamente la hora\n");
			}
			
			printf("¿Cuantas horas  trabaja  el empleado  por semana?\n>");
			scanf("%d",&hora);
			fflush(stdin);
		}while(hora>168);
		printf("¿Cuanto  es la tarifa de tu empleado  por hora ?\n>");
		scanf("%f",&tarifa);
		fflush(stdin);
		
		contador++;
		
		printf("El salario  semanal  del  empleado es $%.3f \n",(hora*tarifa));
		
		printf("Desas continuar? si/no \n");
		scanf("%s",resp);
		fflush(stdin);
		system("cls");
	}while(strcmp(strlwr(resp), "si")==0);
	return 0;
}
