#include "libreria.h"
ArrayList* newArrayList(){
	ArrayList * pNum;
	pNum=(ArrayList*)malloc(sizeof(ArrayList));
	pNum->pElements=(int*)malloc(sizeof(int));
	pNum->size=0;
	
	
	pNum->add=add;
	pNum->set=set;
	pNum->removess=removess;
	pNum->push=push;
	pNum->indexOf=indexOf;
	pNum->sizee=sizee;
	pNum->contains=contains;
	pNum->isEmpty=isEmpty;
	pNum->containsAll=containsAll;
	pNum->clone=clone;
	return pNum;
}

void deleteArrayList(ArrayList*pNum){
	free(pNum);
	
}
void add(ArrayList* pArray,void* aux){
	pArray->pElements[pArray->size]=*((int*)aux);
	resizeUp(pArray);
	
	
}
void removess(ArrayList* pArray,int index){
	int*borrar,i;
	borrar=(int*)pArray->pElements[index];
	free(borrar);
	for(i=index;i<pArray->size;i++){
		
		if(i<pArray->size){
			pArray->pElements[i]=pArray->pElements[i+1];
		}
	}
	pArray->size--;
}

void set(ArrayList* pArray,int index,void* element){
	pArray->pElements[index]=*((int*)element);
}

int get(ArrayList* pArray,int index)
{

	return pArray->pElements[index];
}


void push(ArrayList* self,int index,void* element){
	int i;
	resizeUp(self);
	for(i=self->size;i>=0;i--){
		
		if(i>=index){
			self->pElements[i]=self->pElements[i-1];
		}
		if(i==index){
			self->pElements[i]=*((int*)element);
			break;
		}
	}
	
}
int indexOf(ArrayList* self,void* element){
	int i;
	for(i=0;i<self->size;i++){
		if(self->pElements[i]==*((int*)element)){
			return i;
		}
	}
	return i+1;
}
int sizee(ArrayList* self){
	int i;
	for(i=0;i<self->size;i++){
	 }
	return i;
}
int contains(ArrayList* self,void* element){
	int i;
	for(i=0;i<self->size;i++){
		if(self->pElements[i]==*((int*)element)){
			return 1;
		}
	}
	return 0;
}

int containsAll(ArrayList* self,ArrayList* auxSelf){
	int i;
	if(self->size!=auxSelf->size){
		return 0;
	}
	for(i=0;i<self->size;i++){
		
		if(self->pElements[i]!=auxSelf->pElements[i]){
		return 0;
		}
	}
	if(self->size==0){
		return 0;
	}
	return 1;
}
int isEmpty(ArrayList* self){
	if(self->size==0){
		return 0;
	}return 1;
}

ArrayList* clone(ArrayList* self){
	return self;
}
int resizeUp(ArrayList* pArray)
{
	void* tmp_ptr;
	pArray->size++;
	tmp_ptr=realloc(pArray->pElements,sizeof(int)*(pArray->size+1));

	if (tmp_ptr == NULL) {
		return 0;
	}
	else {
     	pArray->pElements = tmp_ptr;
		return 1;
	}
}   
ArrayList* pop(ArrayList* self,int index){
	void* a;
	a=(ArrayList*)self->pElements[index];
	removess(self,index);
	return a;
}

