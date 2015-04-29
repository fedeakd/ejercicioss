#include "libreria.h"

int ingesoValidar(int a[]){
	int i;
	for(i=0;i<100;i++){
		if(a[i]==-1){
			return 0;
		}
	}
	return 1;
}
