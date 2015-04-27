#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int numero;
	printf("Ingrese un numero \n>");
    scanf("%d",&numero);
    fflush(stdin);
    if(numero%2==0){
    	printf("El numero es PAR %d",numero);
	}else{
		printf("El numero es IMPAR");
	
	}
	return 0;
}
