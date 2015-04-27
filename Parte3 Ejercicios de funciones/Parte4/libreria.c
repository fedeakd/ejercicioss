#include "libreria.h"
int  sacarFecha(int *fecha){
	
	 struct tm *tiempo;
	 int dia;
	 int mes;
	 int anio;
	
	 time_t fecha_sistema;
	 time(&fecha_sistema);
	 tiempo=localtime(&fecha_sistema);
	 
	 anio=tiempo->tm_year + 1900;
	 mes=tiempo->tm_mon + 1;
	 dia=tiempo->tm_mday;



		if(( fecha[0]==-1)||(fecha[1]==-1)||(fecha[2]==-1)){
			return 0;
		}
		else{
			if((fecha[1]<=12)&&(fecha[1]>0)){
				if((fecha[2]>=1000) && ((fecha[2]<anio)||((fecha[2]==anio)&&((fecha[1]<mes)||((fecha[1]==mes)&&(fecha[0]<=dia)))))){
					switch(fecha[1]){
					case 1:
						if((fecha[0]>0)&&(fecha[0]<=31)){
							return 1;
						}return 0;
						break;
					case 2:
						if((fecha[2]%4==0)&&((fecha[2]%100!=0)||(fecha[2]%400==0))){
							if((fecha[0]>0)&&(fecha[0]<=29)){
								return 1;
								}
						}else{
							if((fecha[0]>0)&&(fecha[0]<=28)){
								return 1;
						}return 0;
						break;
							
						}
					
					case 3:
						if((fecha[0]>0)&&(fecha[0]<=31)){
							return 1;
						}return 0;
						break;
					case 4:
						if((fecha[0]>0)&&(fecha[0]<=30)){
							return 1;
						}return 0;
						break;
					case 5:
						if((fecha[0]>0)&&(fecha[0]<=31)){
							return 1;
						}return 0;
						break;
					case 6:
						if((fecha[0]>0)&&(fecha[0]<=30)){
							return 1;
						}return 0;
						break;
					case 7:
						if((fecha[0]>0)&&(fecha[0]<=31)){
							return 1;
						}return 0;
						break;
					case 8:
						if((fecha[0]>0)&&(fecha[0]<=31)){
							return 1;
						}return 0;
						break;
					case 9:
						if((fecha[0]>0)&&(fecha[0]<=30)){
							return 1;
						}return 0;
						break;
					case 10:
						if((fecha[0]>0)&&(fecha[0]<=31)){
							return 1;
						}return 0;
						break;
					case 11:
						if((fecha[0]>0)&&(fecha[0]<=30)){
							return 1;
						}return 0;
						break;
					case 12:
						if((fecha[0]>0)&&(fecha[0]<=31)){
							return 1;
						}return 0;
						break;
						
						
				
		}
		}
			}
			return 0;
		}
}
int comparar(char a[],char b [][50],int cont){
	int i;
	for(i=0;i<10;i++){
		//printf("%s",b[i]);
		if(strcmp(a,b[i])==0){
			if((i)!=cont)
				return 0;
		}
	}return 1;
}
void calcularEdad(int fecha[][3],int *edad){
	 struct tm *tiempo;
	 int dia;
	 int mes;
	 int anio;
	 int i;
	 time_t fecha_sistema;
	 time(&fecha_sistema);
	 tiempo=localtime(&fecha_sistema);
	 
	 anio=tiempo->tm_year + 1900;
	 mes=tiempo->tm_mon + 1;
	 dia=tiempo->tm_mday;
	 for(i=0;i<10;i++){
	 	if((fecha[i][1]>mes)||((fecha[i][1]==mes)&&(fecha[i][0]>dia))){
	 		edad[i]=(anio-1)-fecha[i][2];
		 }
		 else{
		 
		 		edad[i]=(anio)-fecha[i][2];
			 
		 }
	 } 
}
void ordenarEdad(char nom [][50],int fecha[][3],int*edad){
	int i,j;
    int medio,mediovalor,anio,mes,dia;
    char mediostring[50];
for (i=0;i<10-1;i++) //Bucle for para ordenar por burbuja.
	for (j=i+1;j<10;j++)
		{
		if (edad[i] > edad[j]){
			
			mediovalor=edad[i];
			edad[i]=edad[j];
			edad[j]=mediovalor;

			strcpy(mediostring,nom[i]);
			strcpy(nom[i],nom[j]);
			strcpy(nom[j],mediostring);
			
			anio=fecha[i][2];
			mes=fecha[i][1];
			dia=fecha[i][0];
			fecha[i][2]=fecha[j][2];
			fecha[i][1]=fecha[j][1];
			fecha[i][0]=fecha[j][0];
			fecha[j][2]=anio;
			fecha[j][1]=mes;
			fecha[j][0]=dia;
			
			}
	}
}

