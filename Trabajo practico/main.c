#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include "validar.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opc,i,*aux,index,from,to;
	void*pAux;
	char resp[2];
	ArrayList* lista;
	ArrayList* lista1;
	lista1=newArrayList();
	lista=newArrayList();
	while(opc!=21){
		do{
			fflush(stdin);
			printf("Elige una opcion:\n1.add\n2.deleteArray\n3.remove Elemento\n4.set\n5.push\n6.pop\n7.IndexOf\n8.size\n");
			printf("9.contains\n10.containsAll\n11.isEmpaty\n12.clone\n13.subList\n14.clear\n15.Ordenar\n20.MOSTRAR\n21.Salir\n>");
			scanf("%d",&opc);
			fflush(stdin);
			if((opc<1)||(opc>21)){
			   printf("Error\n");}
			}while((opc<1)||(opc>21));
		switch(opc){
			case 1:
				do{
					aux=(int*)malloc(sizeof(int));
					*aux=entraNumero();
					lista->add(lista,aux);
					fflush(stdin);
					printf("Desas continuar\n>");
					scanf("%s",resp);
		
				}while(strcmp(resp,"si")==0);
				
				break;
				
			case 2:
				deleteArrayList(lista);
				//lista=newArrayList();
				printf("Array borrado\n");
				exit(1);
				break;
			
			case 3:
				index=validarIndex(lista->size);
				lista->removess(lista,index);
				printf("Elemento borrado\n");
				break;
			
			case 4:
				aux=(int*)malloc(sizeof(int));
				*aux=entraNumero();
				index=validarIndex(lista->size);
				lista->set(lista,index,aux);
				break;
			case 5:
				
				aux=(int*)malloc(sizeof(int));
				*aux=entraNumero();
				index=validarIndex(lista->size);
				lista->push(lista,index,aux);
				break;
			case 6:
				index=validarIndex(lista->size);
				aux=pop(lista,index);
				printf("%d",*(int*)aux);
				lista1->add(lista1,aux);
				break;
			case 7:
				aux=(int*)malloc(sizeof(int));
				*aux=entraNumero();
				mostrarIndexOf(lista->indexOf(lista,aux),lista->size);
				break;
			case 8:
				printf("El tamanio del Array es %d\n",sizee(lista));
				break;
			case 9:
				aux=(int*)malloc(sizeof(int));
				*aux=entraNumero();
				mostrarContains(lista->contains(lista,aux));
				break;
			case 10: 
				if(lista->containsAll(lista,lista1)==1){
					printf("Son iguales\n");
				}
				else{
					printf("son diferentes\n");
				}
	
				break;
			case 11:
				mostrarEmpty(lista->isEmpty(lista));
				break;
			case 12:
				lista=lista1->clone(lista1);
				break;
			case 13:
				from=validarIndex(lista->size);
				to=validarIndex(lista->size);
				lista1=lista->subList(lista,from,to);
				break;
			case 14:
				clear(lista);
				break;
			case 15:
				ordenar(lista);	
				break;
			case 20:
				for(i=0;i<lista->size;i++){
					printf("%d\n",*(int*)lista->get(lista,i));
				}
				break;
		}
		system("pause");
		system("cls");
	
	}
	return 0;
}
