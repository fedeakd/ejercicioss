#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int  numero =0;
	 int suma ;
	 printf("pone un numero \n>");
	 scanf("%d",&numero);
	 fflush(stdin);
	 suma = numero;
	 
	 for ( ;numero<=100;numero+=suma){
	 	printf("%d \n",numero);
	 }
	
	
	return 0;
}
