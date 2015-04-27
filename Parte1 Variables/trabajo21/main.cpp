#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char num ;
	char i ;
	printf("Ingrese un numero del 1 a 10\n>");
    scanf("%d",&num);
    fflush(stdin);
    //printf("%d",num);
    while ((num>10)||(num<0)){
    	printf("'ERROR!'Ingrese otro numero \n");
    	scanf("%d",&num);
    	fflush(stdin);
    	system("cls");
	}
	for(i=0;i<=10;i++){
		printf("%dx%d=%d\n",num,i,(num*i));
	}
	
	
	return 0;
}
