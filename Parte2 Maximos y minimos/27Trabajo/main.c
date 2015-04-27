#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nApellido[15],resp[4],nAMejor[15],nAmenor[15],i,bandera=0;
	int pInte,pCGeneral,pBelleza,total,mejor=0,menor;
	int acumuladoI=0,acumuladoCG=0,acumuladoB=0;
	for(i=1;i<=20;i++){
		fflush(stdin);
		printf("Ingrese el apellido  y el nombre  concursante--participante n:%d\n>",i);
		gets(nApellido);
		fflush(stdin);
		do{
		
			printf("¿Puntos de inteligencia del concursante?\n>");
			scanf("%d",&pInte);
			fflush(stdin);
			if((pInte>10)||(pInte<0)){
				printf("Error debes  ingresar  del 1 a 10  la puntuacion\n");
			} }while((pInte>10)||(pInte<0));
		do{
		
			printf("¿Puntos de Cultura General del concursante?\n>");
			scanf("%d",&pCGeneral);
			fflush(stdin);
			if((pCGeneral>10)||(pCGeneral<0)){
				printf("Error debes  ingresar  del 1 a 10  la puntuacion\n");
			
			}
		}while((pCGeneral>10)||(pCGeneral)<0);
		do{
		
			printf("¿Puntos de Belleza del concursante?\n>");
			scanf("%d",&pBelleza);
			fflush(stdin); 
			if((pBelleza>10)||(pBelleza<0)){
				printf("Error debes  ingresar  del 1 a 10  la puntuacion\n");
			}
		}while((pBelleza>10)||(pBelleza<0));
		system("cls");
		total=pInte+pBelleza+pCGeneral;
		acumuladoB+=pBelleza;
		acumuladoCG+=pCGeneral;
		acumuladoI+=pInte;
		if(bandera==0){
			mejor=total;
			strcpy(nAMejor,nApellido);
			strcpy(nAmenor,nApellido);
			menor=total;
			bandera++;
		}
		if(total>mejor){
			mejor=total;
			strcpy(nAMejor,nApellido);
		}if(total<menor){
			menor=total;
			strcpy(nAmenor,nApellido);
		}
		
	
		}
		printf("El concursante con  mejor puntuacion general es %s,con %d puntos\n",nAMejor,mejor);
		printf("El puntaje acumulado  en:Cultura general:%d\n",acumuladoCG);
		printf("                        :Inteligencia:%d\n",acumuladoI);
		printf("                        :Belleza:%d\n",acumuladoB);	
		printf("El concursante con menor puntaje es %s con %d puntos\n",nAmenor,menor);
		
		
		
	
	
	
	return 0;
}
