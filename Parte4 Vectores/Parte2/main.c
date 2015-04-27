#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,numT[10],pos,i,nose=1,d;
	char prueba[10];
	for(i=0;i<10;i++){
		prueba[i]='a';
		numT[i]=-1;
	}
	for(i=0;i<10;i++){
		
		printf("Indique algun numero\n>");
		scanf("%d",&num);
		fflush(stdin); 
		
		do{
		printf("Indique la posicion del 1 al 10\n>");
		scanf("%d",&pos);
		fflush(stdin);
		pos--;
		if((pos<1)||(pos>10)){
			printf("posicion fuera de rango\n");
		}else{
			if(prueba[pos]!='a'){
			printf("Posicion ocupada\n");
		}
	
		}

	}while((prueba[pos]!='a')||((pos<0)||(pos>10)));
	
	prueba[pos]='b';
	numT[pos]=num;
	
	}
	for(i=0;i<10;i++){
		printf("%d\n",numT[i]);
	}
	return 0;
}
