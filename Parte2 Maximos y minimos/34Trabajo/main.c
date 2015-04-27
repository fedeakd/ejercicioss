#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	char resp[4],num;
	do{
		do{
			printf("¿Que operacion  matematica deceas realizar?\ningrese con numero(1 suma,2 resta,3 division,4 multiplicacion) \n>");
			scanf("%d",&num);
			fflush(stdin);
			if((num>4)||(num<0)){
				printf("Incorrecto  ingrese nuevamente");
			}
		}while((num>4)||(num<0));
		printf("Ingrese un numero \n>");
		scanf("%d",&num1);
		fflush(stdin);
		printf("Ingrese otro numero \n>");
		scanf("%d",&num2);
		fflush(stdin);
		switch(num){
			case 1:
				printf("%d+%d=%d\n",num1,num2,(num1+num2));
				break;
			case 2:
				printf("%d-%d=%d\n",num1,num2,(num1-num2));
				break;
			case 3:
				printf("%d/%d=%d\n",num1,num2,(num1/num2));
				break;
			case 4:
				printf("%d*%d=%d\n",num1,num2,(num1*num2));
		}
		
		
		printf("Desas continuar? si/no \n");
		scanf("%s",resp);
		fflush(stdin);	
	}while(strcmp(strlwr(resp), "si")==0);
	return 0;
}
