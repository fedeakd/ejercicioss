#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  legajo[100],i,edad[100]={-1},legajoSuper[100],cont=0;
	float saldo[100],prom=0;
	 
	for(i=0;i<100;i++){
		legajo[i]=i+1;
		legajoSuper[i]=-1;
		edad[i]=-1;
	}
	for(i=0;i<5;i++){
		printf("Empleado  numero:%d\n",(i+1));
		do{
			printf("indique la edad\n>");
			scanf("%d",&edad[i]);
			fflush(stdin);
			if((edad[i]<0)||(edad[i]>100)){
				printf("Error de edad\n");
			}
	}while((edad[i]<0)||(edad[i]>100));
	prom+=edad[i];
	
	do{
			printf("indique el saldo\n>");
			scanf("%f",&saldo[i]);
			fflush(stdin);
			if(saldo[i]<1){
				printf("Error de saldo\n");
			}
	
	}while((saldo[i]<1));
	system("cls");
	}
	
	prom=prom/i;
	printf("%f\n",prom);
	for(i=0;edad[i]!=-1;i++){
		//printf("ad");
		if(edad[i]>prom){
			legajoSuper[cont]=legajo[i];
			cont++;
			//printf("entre %d",legajoSuper[i] );
			
		} }
	for(i=0;legajoSuper[i]!=-1;i++){
		printf("superior legajo n:%d\n",legajoSuper[i]);
	}
	
	
	return 0;
}
