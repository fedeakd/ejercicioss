#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1 =0;
	int num2=0;
	int num3=0;
	printf("Di un numero   \n");
    scanf("%d",&num1);
    fflush(stdin);
    printf("Di otro numero   \n");
    scanf("%d",&num2);
    fflush(stdin);
    num3 = num1;
    num1=num2;
    num2=num3;
    printf("----%d----%d----",num1,num2);
	
	
	
	
	return 0;
}
