#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[20],aux[20],i,mayor=0,pos,cant=0,a;
	for(i=0;i<20;i++){
		num[i],aux[i]=-1;
	}
	for(i=0;i<20;i++){
		do{
			printf("Indicar un numero\n>");
			scanf("%d",&num[i]);
			fflush(stdin);
			if(num[i]<0){
				printf("Error el numero no es correcto\n");
			}
		}while(num[i]<0);
		
	}
	for(i=0;i<20;i++){
		if(num[i]>=mayor){
			if(num[i]>mayor){
				for(a=0;a<20;a++){
					aux[a]=-1;
				}
			
				mayor=num[i];
				cant=0;
				aux[cant]=i;
			}else{
				cant++;
				aux[cant]=i;
			}
		}
	}
	if((cant+1)==1){
		printf("El numero mayor es %d y se repite %d ves y en el orden ",mayor,(cant+1));
	}else{
	
		printf("El numero mayor es %d y se repite %d veces y en el orden ",mayor,(cant+1));
		}
	for(i=0;aux[i]!=-1;i++){
		printf("%d ",aux[i]);
		
	}
	
	return 0;
}
