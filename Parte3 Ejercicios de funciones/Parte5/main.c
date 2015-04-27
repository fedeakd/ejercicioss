#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,total=0;
	do{
		printf("Indique un numero entero\n");
		scanf("%d",&num);
		total+=num;
	}while(validaS_N()==1);
	
	printf("la suma es %d",total);
	return 0;
}
