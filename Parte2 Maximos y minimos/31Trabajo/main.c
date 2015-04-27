#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float tarifa,total,mayor=0,menor,costo=0,prom;
	int  hora=0;
	char nombre[20],maNombre[20],meNombre[20],bandera=0,contador=0,resp[4];
	do{
		contador++;
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
		
		total=(float)hora*tarifa;
		costo+=(float)total;
		printf("%d",costo);
		
		if(bandera==0){
			menor=total;
			mayor=total;
			strcpy(meNombre,nombre);
			strcpy(maNombre,nombre);
			bandera=1;
		}
		if(total>mayor){
			mayor=total;
			strcpy(maNombre,nombre);
		}else if(total<menor){
			menor=total;
			strcpy(meNombre,nombre);
		}
		
		printf("El salario  semanal  del  empleado es $%.3f \n",total);
		
		printf("Desas continuar? si/no \n");
		scanf("%s",resp);
		fflush(stdin);
		system("cls");
	}while(strcmp(strlwr(resp), "si")==0);
	printf("La cantidad de empleado calculado  fue %d\n",contador);
	printf("El empleaado  con  MAYOR sueldo es %s con $%.3f\n",maNombre,mayor);
	printf("El empleaado  con  MENOR sueldo es %s con $%.3f\n",meNombre,menor);
	printf("El valor de los sueldos  que debe abonar  la empreza  es:$%.3f\n",costo);
	printf("El  PROMEDIO del sueldo es:$%.3f",(costo/contador));	
	
	return 0;
}
