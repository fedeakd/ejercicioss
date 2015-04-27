#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int num ;
	printf("Multiplo  de 2 :\n");
	for(num=0;num<=100;num++){
		if(num%2==0){
			printf("%d,",num);
		}
		
	}
	printf("\n  \nMultiplo de 3:\n");
	for(num=0;num<=100;num++){
		
		if(num%3==0){
			printf("%d,",num);
		}
		
	}
	printf("\n \nMultiplo de 3 y 2: \n");
	for(num=0;num<=100;num++){
		
		if((num%3==0)&&(num%2==0)){
			printf("%d,",num);
		}
		
	}
	
	return 0;
}
