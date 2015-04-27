#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char numero=0;
	char i ;
	char numeros=0;
	float medida=0;
	for (i=0;i<5;i++){
		printf("ingrese algun numero \n");
		scanf("%d",&numero);
		numeros+=numero;
		fflush(stdin);
		system("cls");
		
	}
	printf("total : %d",(numeros/5));
	return 0;
}
