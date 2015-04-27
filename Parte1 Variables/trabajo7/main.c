#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char num ;
	
	printf("indicar el dia  de trabajo \n>");
    scanf("%d",&num);
    fflush(stdin);
    while((num>7)|| (num<1)){
    
    printf("El dia es incorrecto ingrese  otro   \n");
    scanf("%d",&num);
    fflush(stdin);
	}switch(num){
		case 1:
			printf("Lunes");
			break;
		case 2:
			printf("Martes");
			break;
		case 3:
			printf("Miercoles");
			break;
		case 4:
			printf("Jueves");
			break;
		case 5:
			printf("Viernes");
			break;
		case 6:
			printf("Sabado");
			break;
		default:
			printf("Domingo");
			break;
	}
	
	
	return 0;
}
