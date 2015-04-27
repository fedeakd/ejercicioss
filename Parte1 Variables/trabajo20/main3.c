#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float calcular ;
    float hora=0 ;
    float resta;
    char nombre[100];
    char antiguedad=0;
    int  cantidadHoraMes=0;
    printf("Hora del  empleado \n> ");
    scanf("%f",&hora);
    fflush(stdin);
    
    printf("Nombre  del empleado \n>");
    scanf("%s",&nombre);
    fflush(stdin);
    
    printf("Antiguedad \n>");
    scanf("%c",&antiguedad);
    fflush(stdin);
    
    printf("cantidad de hora \n>");
    scanf("%d",&cantidadHoraMes);
    fflush(stdin);
    
    calcular = (hora*cantidadHoraMes)+(antiguedad*30);
    resta = calcular *0.13;
    printf("Nombre\tAntiguedad\thora\tbruto\t        descuento\ttotal      \n");
    printf("%s\t\t%d\t%.3f\t%.3f\t%.3f\t     %.3f\n ",nombre,antiguedad,hora,calcular,resta,(calcular-resta));
    
  system("PAUSE");	
  return 0;
}
