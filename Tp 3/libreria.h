#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct ArrayList{
	int reservedSize;
	int size;
	void** pElements;
	
	void (*add)();
	void(*removess)();
	void (*set)();
	void(*push)();
	void(*clear)();
	void*(*pop)();
	struct ArrayList*(*clone)();
	struct ArrayList*(*subList)();
	void*(*get)();
	
	int(*indexOf)();
	int(*sizee)();
	int(*contains)();
	int(*containsAll)();
	int(*isEmpty)();
	
	
}ArrayList;

ArrayList* newArrayList();
void deleteArrayList(ArrayList*pNum);
void add(ArrayList* pArray,void* aux);
void removess(ArrayList* pArray,int index);
void set(ArrayList* pArray,int index,void* element);
void* get(ArrayList* pArray,int index);
void push(ArrayList* self,int index,void* element);
void* pop(ArrayList* self,int index);
int indexOf(ArrayList* self,void* element);
int sizee(ArrayList* self);
int contains(ArrayList* self,void* element);
int containsAll(ArrayList* self,ArrayList* auxSelf);
int isEmpty(ArrayList* self);
ArrayList* clone(ArrayList* self);
ArrayList* subList(ArrayList* self,int from,int to);
int resizeUp(ArrayList* pArray);

