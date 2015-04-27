#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int socio,edad,eTenis=0,eFutbol=0,eRugby=0,eHockey=0,eVoley=0;
	char aYN[40],resp[4],cTenis=0,cFutbol=0,cRugby=0,cHockey=0,cVoley=0,depor=0;
	float promTenis,promFutbol,promRugby,promHockey,promVoley;
	do{	
		printf("Ingrese el numero de socio  \n>");
		scanf("%d",&socio);
		fflush(stdin);
		
		printf("Ingrese el Apellido y el Nombre \n>");
		gets(aYN);
		fflush(stdin);
		do{
			printf("Ingrese edad-\n>");
			scanf("%d",&edad);
			fflush(stdin);
			if(( edad>110)||(edad<0)){
				printf("Edad  incorrecta ingrese otra!\n");
		}	
		}while((edad>110)||(edad<0));
		do{
			printf("Ingrese con los siguientes numeros el deporte que practica \n");
			printf("1 tenis,2 rugby,3 voley,4 hockey,5 futbol\n>");
			scanf("%d",&depor);
			fflush(stdin);
			if(( depor>5)||(depor<1)){
				printf("Error ingrese  nuevamente\n");
			}
		}while((depor>5)||(depor<1));
		switch((int)depor){
			case 1:
				cTenis++;
				eTenis+=edad;
				printf("%d ,%d",cTenis,eTenis);
				break;
			case 2:
				cRugby++;
				eRugby+=edad;
				break;
			case 3:
				cVoley++;
				eVoley+=edad;
				break;
			case 4:
				cHockey++;
				eHockey+=edad;
				break;
			case 5:
				cFutbol++;
				eFutbol+=edad;
		}
		
		
		printf("Desas continuar? si/no \n>");
		system("cls");
		scanf("%s",resp);
		fflush(stdin);		
		
	}while(strcmp(strlwr(resp), "si")==0);
	printf("La cantidad  de socio  que practican Tenis es:%d \n La cantidad de dsocio que practican rugby:%d\n",cTenis,cRugby);
	printf("El promedio de la edad de jugadores de TENIS es %.3f\n", ((float)eTenis/cTenis));
	printf("El promedio de la edad de jugadores de RUGBY es %.3f\n",((float)eRugby/cRugby));
	printf("El promedio de la edad de jugadores de VOLEY es %.3f\n",((float)eVoley/cVoley));
	printf("El promedio de la edad de jugadores de HOCKEY es %.3f\n",((float)eHockey/cHockey));
	printf("El promedio de la edad de jugadores de FUTBOL es %.3f\n",((float)eFutbol/cFutbol));
	return 0;
}
