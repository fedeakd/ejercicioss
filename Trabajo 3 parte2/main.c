#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include "validar.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opc,i,aux,index;
	int*pAux;
	char resp[2];
	ArrayList* lista2;
	ArrayList* lista1;
	i=1;
	pAux=&i;
	lista1=newArrayList();
	lista1->add(lista1,pAux);
	lista1->add(lista1,pAux);
	lista1->add(lista1,pAux);
	lista1->add(lista1,pAux);
	lista2=newArrayList();
	while(opc!=21){
		do{
			fflush(stdin);
			printf("Elige una opcion:\n1.add\n2.deleteArray\n3.remove Elemento\n4.set\n5.push\n6.pop*\n7.IndexOf\n8.size\n");
			printf("9.contains\n10.containsAll\n11.isEmpaty\n12.clone\n13.subList*\n14.clear*\n20.MOSTRAR\n21.Salir\n>");
			scanf("%d",&opc);
			fflush(stdin);
			if((opc<1)||(opc>21)){
			   printf("Error\n");}
			}while((opc<1)||(opc>21));
		switch(opc){
			case 1:
				do{
					aux=entraNumero();
					pAux=&aux;
					lista2->add(lista2,pAux);
					printf("Desas continuar\n>");
					scanf("%s",resp);
		
				}while(strcmp(resp,"si")==0);
				
				break;
			case 2:
				deleteArrayList(lista2);
				lista2=newArrayList();
				printf("Array borrado\n");
				break;
			case 3:
				index=validarIndex(lista2->size);
				lista2->removess(lista2,index);
				printf("Elemento borrado\n");
				break;
			case 4:
				aux=entraNumero();
				pAux=&aux;
				index=validarIndex(lista2->size);
				lista2->set(lista2,index,pAux);
				break;
			case 5:
				aux=entraNumero();
				pAux=&aux;
				index=validarIndex(lista2->size);
				lista2->push(lista2,index,pAux);
				break;
			case 6:
				index=validarIndex(lista2->size);
				lista1->pElements[2]=(int)pop(lista2,index);
				break;
			case 7:
				aux=entraNumero();
				pAux=&aux;
				mostrarIndexOf(lista2->indexOf(lista2,pAux),lista2->size);
				break;
			case 8:
				printf("El tamanio del Array es %d\n",lista2->sizee(lista2));
				break;
			case 9:
				aux=entraNumero();
				pAux=&aux;
				mostrarContains(lista2->contains(lista2,pAux));
				break;
			case 10:
				if(lista2->containsAll(lista2,lista1)==1){
					printf("Son iguales\n");
				}
				else{
					printf("son diferentes\n");
				}
	
				break;
			case 11:
				mostrarEmpty(lista2->isEmpty(lista2));
				break;
			case 12:
				lista2=lista2->clone(lista1);
				break;
			case 13:
				break;
			case 14:
				break;
			case 20:
				for(i=0;i<lista2->size;i++){
					printf("%d\n",get(lista2,i));
				}	
		}
		system("pause");
		system("cls");
	
	}
	return 0;
}
