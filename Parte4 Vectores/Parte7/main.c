#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[20]={-1},min[20]={-1},i,p,aux=-1;
		for(i=0;i<20;i++){
		do{
			printf("Indicar un numero num:%d\n>",(i+1));
			scanf("%d",&num[i]);
			fflush(stdin);
			if(num[i]<0){
				printf("Error el numero no es correcto\n");
			}
		}while(num[i]<0);
		}
	for(i=0;i<20;i++){
		min[i]=num[i];
		}
	for(i=0;i<19;i++){
		for(p=i+1;p<20;p++){
			if(min[i]>min[p]){
				aux=min[i];
				min[i]=min[p];
				min[p]=aux;
			}
		}
	}
	for(i=0;i<20;i++){
		printf("%d\n",num[i]);
	}
	printf("----------------Decreciente----------------\n");
	for(i=0;i<20;i++){
		printf("%d\n",min[i]);
	}	
		
	
	return 0;
}
