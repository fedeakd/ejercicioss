#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10],b[10],c[10],i;
	for(i=0;i<10;i++){
		a[i],b[i],c[i]=-1;
	}
	for(i=0;i<5;i++){
		printf("nr%d\n",(i+1));
		printf("Ingrese un numero\n>");
		scanf("%d",&a[i]);
		fflush(stdin);
		printf("Ingrese otro  numero\n>");
		scanf("%d",&b[i]);
		fflush(stdin);
	}
	for(i=0;i<5;i++){
		if(a[i]<b[i]){
			c[i]=a[i];
			printf("el numero menor entre %d y %d es %d\n",a[i],b[i],c[i]);
		}else{
			if(a[i]==b[i]){
				printf("el numero %d y %d son iguales\n",a[i],b[i]);
			}else{
				c[i]=b[i];
				printf("el numero menor entre %d y %d es %d\n",a[i],b[i],c[i]);
			}
			
			
		}
		
	}
	return 0;
}
