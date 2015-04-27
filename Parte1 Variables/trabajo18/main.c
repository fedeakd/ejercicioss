#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char resp;
	char peso;
	char mayor =0 ,menor=0;
	
	printf("¿Quieres agregar un empleado?\n>");
    scanf("%c",&resp);
    fflush(stdin);
    while(resp=='s'){
    	printf("¿Cuanto  pesa ?\n>");
    	scanf("%c",&peso);
    	fflush(stdin);
    	if(peso<=80){
    		menor+=1;
		}else{
			mayor+=1;
		}
    	printf("¿Quieres agregar un empleado?\n>");
    	scanf("%c",&resp);
    	fflush(stdin);
    
	
    	
	}
	printf("Los empleado  que pesan  hasta  80kg son: %d \nLos emprelado  que pesan mas de 80kg son:%d",menor,mayor);
	
	
	

	return 0;
}
