#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int base ;
	int altura;
	printf("Ingrese la altura de un triangulo \n>");
    scanf("%d",&altura);
    fflush(stdin);
    printf("Ingrese la base de un triangulo \n>");
    scanf("%d",&base);
    fflush(stdin);
    printf("La supertficie de un triangulo es: %d ",((altura*base)/2));
	return 0;
}
