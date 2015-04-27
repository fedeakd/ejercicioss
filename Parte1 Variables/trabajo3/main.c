#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero =0;
	int i;
	char mayores=0;
	char menores=0;
	for(i=0;i<10;i++){
		//printf("%d",i);
		printf("Ingrese un numero \n");
    	scanf("%d",&numero);
    	system("cls");
    	fflush(stdin);
    	if(numero>0){
    		mayores++;
		}if(numero<0){
			menores++;
		}
		
	}
	printf("Los  numeros  mayores a 0 son: %d \n  Los numero menores a 0 son: %d",mayores,menores);
	
	
	
	
	return 0;
}
