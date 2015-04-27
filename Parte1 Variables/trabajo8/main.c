#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
   char caracter ;
   char contadorA=0,contadorE=0,contadorI=0,contadorO=0,contadorU=0;
   
   
   printf("Ingrese una letra\n>");
   char cantidad;
   for(cantidad=0;cantidad<20;cantidad++){
       printf("\n>");
       scanf("%c",&caracter);
       caracter=tolower(caracter);
       switch(caracter){
       case 'a': 
            contadorA++;
            break;
       case 'e':
            contadorE++;
            break;
       case 'i':
            contadorI++;
            break;
       case 'o':
            contadorO++;
            break;
       case 'u':
            contadorU++;
            break;
            
       }
   system("cls");
   printf("A:%d - E:%d - I:%d - O:%d - U:%d",contadorA,contadorE,contadorI,contadorO,contadorU);
   
   }   
        
        
    
  system("PAUSE");	
  return 0;
  
  
}
