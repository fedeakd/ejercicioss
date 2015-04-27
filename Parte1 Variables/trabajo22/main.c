#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char legajo=0;
	char nombre[50];
	float sueldo=0;
	char sexo;
	char resp;
	int hombres=0;
	int mujeres=0;
	printf("Desea agregar a un  empleado s/n?");
    scanf("%c",&resp);
    fflush(stdin);
    
    while(resp=='s'){
    	printf("\nIngrese el legajo \n");
    	scanf("%c",&legajo);
    	fflush(stdin);
    	printf("Ingrese el nombre \n");
    	scanf("%s",&nombre);
    	fflush(stdin);
    	printf("Ingrese el sueldo \n");
    	scanf("%f",&sueldo);
    	fflush(stdin);
    	printf("Ingrese un sexo  (femenino 1 , hombre 2) \n");
    	scanf("%d",&sexo);
    	fflush(stdin);
    	if((sexo==1)&&(sueldo>500)){
    		printf("%d",sexo);
    		mujeres++;
		}
		if((sexo==2)&&(sueldo<400)){
			printf("%d",sexo);
			hombres++;
		}
		
    printf("Desea agregar a un  empleado s/n?");
    scanf("%s",&resp);
    fflush(stdin);
    system("cls");
	}
	printf("\nLa cantidad de  mujeres  que ganan mas  de 500$ son  %d \nLa cantidad de hombres que gana menos de 400$ son :%d",mujeres,hombres);
	
	
	
	return 0;
}
	

