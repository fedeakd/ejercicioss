#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int legajo=0,mLegajo;
	float prom=0,mejor=0;
	char  nom[25],nMejor[30],resp[4],apro=0,dicem=0,marzo=0;
	do{
		printf("Ingrese el nombre de un alumno \n>");
		gets(nom);
		fflush(stdin);
		do{
			if((legajo>9999||(legajo<0))){
				printf("Error,el legajo es incorrecto  poner otro\n");
			}
			printf("Ingrese el legajo del alumno\n>");
			scanf("%d",&legajo);
			fflush(stdin);
		}while((legajo>9999)||(legajo<0));
		do{
			if((prom>10)||(prom<0)){
				printf("Error promedio incorrecto\n");
			}
			printf("Ingrese el promedio del alumno \n>");
			scanf("%f",&prom);
			fflush(stdin);
		}while((prom>10)||(prom<0));
		if(prom>=7){
			apro++;
		}else{
			if((prom<7)&&(prom>=4)){
				dicem++;
			}else{
				marzo++;
			}
		}
		if(prom>mejor){
			mejor=prom;
			mLegajo=legajo;
			strcpy(nMejor,nom);
		}
		printf("Desas continuar? si/no \n");
		scanf("%s",resp);
		fflush(stdin);
		system("cls");
	}while(strcmp(strlwr(resp), "si")==0);
	printf("Los alumnos que aprobaron son: %d alumnos\n",apro);
	printf("Los alumnos que tiene que rendir en diciembre son:%d\n",dicem);
	printf("Los alumnos que riden  en marzo son:%d\n",marzo);
	printf("El alumno con mejor  promedio es %s,con el legajo %d",nMejor,mLegajo);
	return 0;

}
