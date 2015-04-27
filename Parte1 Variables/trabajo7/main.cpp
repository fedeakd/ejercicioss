#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float centimetros;
	int pies;
	float pulgada;
	printf("Pone cm \n");
    scanf("%f",&centimetros);
    fflush(stdin);
    pies =  centimetros *0.0328084;
    pulgada = centimetros / 2.54;
    printf("%f cm son %d pies  y %f pulgadas",centimetros,pies,pulgada);
	return 0;
}
