#include "libreria.h"
ArrayList* newArrayList(){
    ArrayList* pList;
    pList=malloc(sizeof(ArrayList));
    pList->pElements=malloc(sizeof(int));
    pList->size=0;
    
	pList->add=add;
	pList->set=set;
	pList->removess=removess;
	pList->push=push;
	pList->indexOf=indexOf;
	pList->sizee=sizee;
	pList->contains=contains;
	pList->isEmpty=isEmpty;
	pList->containsAll=containsAll;
	pList->clone=clone;
	pList->subList=subList;
	pList->pop=pop;
	pList->get=get;
	pList->ordenar=ordenar;
	return pList;
}
void add(ArrayList* pArray,void* aux){
	 pArray->pElements[pArray->size]=aux;
	  resizeUp(pArray);
}


void* get(ArrayList* pArray,int index){
	
	return pArray->pElements[index];
}
void deleteArrayList(ArrayList*pNum){
	free(pNum);
	
}

void removess(ArrayList* pArray,int index){
	void*borrar;
	int i;
	borrar=&pArray->pElements;
	for(i=index;i>=0;i--){
		pArray->pElements[i]=pArray->pElements[i-1];
	}
	pArray->pElements=&pArray->pElements[1];
	free(borrar);
	pArray->size--; 
}
void set(ArrayList* pArray,int index,void* element){
	pArray->pElements[index]=element;
}

void push(ArrayList* self,int index,void* element){
	int i;
	
	for(i=self->size;i>=0;i--){
		if(i>=index){
			self->pElements[i]=self->pElements[i-1];
		}
		if(i==index){
			self->pElements[i]=element;
			resizeUp(self);
			break;
		}
	}
	
}

void* pop(ArrayList* self,int index){
	void* devu;
	devu=self->pElements[index];
	removess(self,index);
	return devu;
}
int indexOf(ArrayList* self,void* element){
	int i;
	for(i=0;i<self->size;i++){
		if(*(int*)self->pElements[i]==*((int*)element)){
			return i;
		}
	}
	return i+1;
}
int contains(ArrayList* self,void* element){
	int i;
	for(i=0;i<self->size;i++){
		if(*(int*)self->pElements[i]==*((int*)element)){
			return 1;
		}
	}
	return 0;
}

int containsAll(ArrayList* self,ArrayList* auxSelf){
	int i,g,ban=0;
	if((self->size==0)||(auxSelf->size==0)){
		return 0;
	}
	for(i=0;i<auxSelf->size;i++){
		for(g=0;g<self->size;g++){
			if(*(int*)self->pElements[g]==*(int*)auxSelf->pElements[i]){
				ban++;
				break;
		}
		}
	}
	//printf("")
	if(auxSelf->size==ban){
	 return 1;	
	}
	else{
		return 0;
	}
}
int sizee(ArrayList* self){
	int i;
	for(i=0;i<self->size;i++){
	 }
	return i;
}
int isEmpty(ArrayList* self){
	if(self->size==0){
		return 0;
	}return 1;
}

ArrayList* clone(ArrayList* self){
	return self;
}

ArrayList* subList(ArrayList* self,int from,int to){
	ArrayList* lista;
	lista=newArrayList();
	int i, d=0;
	void*aux;
	for(i=from;i<=to;i++){
		aux=self->pElements[i];
		add(lista,aux);
	}
	return lista;
}
int resizeUp(ArrayList* pArray)
{
	void* tmp_ptr;

	pArray->size++;
	
	pArray->pElements=realloc(pArray->pElements,sizeof(int)*(pArray->size+1));
	return 0;
}
	/*if (tmp_ptr == NULL) {
		return 0;
	}
	else {
     	pArray->pElements = tmp_ptr;
		return 1;
	}
} */
void clear(ArrayList* pArray){
	free(pArray->pElements);
	pArray->size=0;
}
void ordenar(ArrayList* pArray){
	int aux,i,g;
	void* p;
	for(i=0;i<pArray->size-1;i++){
		for(g=i+1;g<pArray->size;g++){
			if((*(int*)pArray->pElements[i])>(*(int*)pArray->pElements[g])){
				p=pArray->pElements[i];
				pArray->pElements[i]=pArray->pElements[g];
				pArray->pElements[g]=p;
			}
		}
	}
}
