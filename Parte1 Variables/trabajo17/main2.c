#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    int cuadrado=0,cubo=0;
    int numero = 0;
    printf("ingrese un numero \n>");
    scanf("%d",&numero);
    int i;
    for(i =1;i<=numero;i++){
          cuadrado=i*i;
          cubo =i*i*i;
          printf("numero: %d \t cuadrado:%d \t cubo:%d \n",i,cuadrado,cubo);
          
          }
  
  system("PAUSE");	
  return 0;
}
