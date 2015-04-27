#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int numero =0;
	printf("Escribe un numero \n");
    scanf("%d",&numero);
    fflush(stdin);
    if(numero>0){
    	printf("el cuadrado de  %d  es: %d",numero,(numero*numero));
    	
	}else{
		printf("ERROR,el numero debe ser mayor que cero");
	}
	return 0;
}
