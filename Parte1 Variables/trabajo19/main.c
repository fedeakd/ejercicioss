#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char vendedores = 1;
	float vend1=0,vend2=0,vend3=0;
	float venta =0;
	float total =0;
	while(vendedores!=0){
		printf("¿Que numero de vendedor es (1,2,3)?Pulse 0 para salir \n>");
    	scanf("%d",&vendedores);
   	 	fflush(stdin);
    	printf("¿Cuanto fue el importe? \n>");
    	scanf("%f",&venta);
    	fflush(stdin);
    	total=0.05*venta;
    //printf("%.3f",total);
		if(vendedores==1){
		 	vend1+=total;
		}if(vendedores==2){
			vend2+=total;
		}if(vendedores==3){
			vend3+=total;
	}}
	printf("La comision del  vendedor1:%.3f$ \nLa comision del vendedor2:%.3f$ \nLa comision del vendedor3:%.3f$",vend1,vend2,vend3);
	return 0;
}
