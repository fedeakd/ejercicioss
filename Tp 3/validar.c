#include "validar.h"
int entraNumero(){
	int aux;
	printf("Ingrese un numero\n>");
	scanf("%d",&aux);
	return aux;
}
int validarIndex(int size){
	int index;
	
	do{
		printf("Indique el indice que deseas agregar el numero\n>");
		scanf("%d",&index);
		if((index<0)||(index>size)){
		printf("Indice no encotrado\n");
		}
	}while((index<0)||(index>size));
	return index;
}
void mostrarIndexOf(int index,int size){
	if(index<size){
		printf("El indice  es %d\n",index);
	}else{
		printf("El indice no fue encotrado\n");
		}
}
void mostrarContains(int con){
	if(con==1){
		printf("El elemento existe\n");
	}
	else{
		  printf("El elemento no existe\n");
	}
	
}
void mostrarEmpty(int empty){
	 if(empty==1){
		printf("El array contiene elementos\n");
		}
	else{
		printf("El array NO! contiene elementos\n");
		}		
}
