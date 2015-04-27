#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dia=1,mes=1,ano=2015,b;
	int fDia,fMes,fAno;
	int cDia,cMes,cAno;
	int temp,tempMax=0,tempMin=0;
	int tMax=0,tMin=0;
	char resp[4],bandera=0;
	do{
		printf("Fecha:%d/%d%/%d\n",dia,mes,ano);
		switch(mes){
			case 1:
				b=31;
				break;
			case 2:
				b=28;
				break;
			case 3:
				b=31;
				break;
			case 4:
				b=30;
			case 5:
				b=31;
				break;
			case 6:
				b=30;
				break;
			case 7:
				b=31;
				break;
			case 8:
				b=31;
			case 9:
				b=30;
				break;
			case 10:
				b=31;
				break;
			case 11:
				b=30;
				break;
			case 12:
				b=31;
				break;
				
				
			
				
	}
	
		
		printf("Ingrese la temperatura Maxima del dia \n>");
		scanf("%d",&tempMax);
		fflush(stdin);
		printf("Ingrese la temperatura Minima del dia \n>");
		scanf("%d",&tempMin);
		fflush(stdin);
		while(tempMin>tempMax){//comprueba
			printf("La temperatura Minima no es correcta ingrese otra \n>");
			scanf("%d",&tempMin);
			fflush(stdin);	
		}if(bandera==0){
			bandera=1;
			tMax=tempMax;
			tMin=tempMin;
			fDia=dia;
			fMes=mes;
			fAno=ano;
			cDia=dia;
			cMes=mes;
			cAno=ano;
		}
		if(tempMax>tMax){
			fDia=dia;
			fMes=mes;
			fAno=ano;
			tMax=tempMax;
		}if(tempMin<tMin){
			cDia=dia;
			cMes=mes;
			cAno=ano;
			tMin=tempMin; 
		}
		dia++;
		if(dia==(b+1)){
			mes++;
			dia=1;
		}if(mes>12){
			ano++;
			mes=1;
		}
		printf("Desas continuar? si/no \n");
		scanf("%s",resp);
		fflush(stdin);
		system("cls");
		
			
	}while(strcmp(strlwr(resp), "si")==0);
	printf("El dia mas calido  %d/%d/%d La temperatura maxima fue %d\n",cDia,cMes,cAno,tMax);
	printf("El dia mas frio    %d/%d/%d La temperatura minima fue %d\n",fDia,fMes,fAno,tMin);
	
	
	return 0;
}
