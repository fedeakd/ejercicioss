#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[10]={0},i,a;
	char resp[2];
	for(i=0;i<3;i++){
		do{

			printf("Indicar un numero num:%d\n>",(i+1));
			scanf("%d",&a);
			num[i]+=a;
			fflush(stdin);
			printf("Indique si quieres seguir sumando \n>");
			scanf("%s",resp);
			fflush(stdin);
		}while(strcmp(strlwr(resp), "si")==0);
	
	}
	for(i=0;i<10;i++){
		printf("Elemento %d     cantidad %d\n",i,num[i]);
	}
	return 0;
	
}
