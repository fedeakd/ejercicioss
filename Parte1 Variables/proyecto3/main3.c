#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float calcular ;
    float hora=0 ;
    char nombre[100];
    char antiguedad=0;
    int  cantidadHoraMes=0;
    printf("Hora del  empleado ");
    scanf("%f",&hora);
    fflush(stdin);
    
    printf("Nombre  del empleado ");
    scanf("%s",&nombre);
    fflush(stdin);
    
    printf("Antiguedad ");
    scanf("%c",&antiguedad);
    fflush(stdin);
    
    printf("cantidad de hora ");
    scanf("%d",&cantidadHoraMes);
    fflush(stdin);
    
    calcular = (hora*cantidadHoraMes)+(antiguedad*30);
    printf(" %s , %d",nombre,calcular);
    
  system("PAUSE");	
  return 0;
}
