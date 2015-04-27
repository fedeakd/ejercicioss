#include "libreria.h"
int validaS_N(void){
	int rta=1;
	char sN;
	while(rta==1){
		printf("Deseas continuar\n");
		scanf("%c",&sN);
		fflush(stdin);
		if((toupper(sN )=='S')||(toupper(sN)=='N')){
			if(sN=='s'){
				return 1;
			}else{
				return 0;
			}
		}
	}
}
