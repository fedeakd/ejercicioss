#include "libreria.h"
int horaLlegada(int h[]){
	if((h[0]!=-1)&&(h[1]!=-1)){
	
		if(((h[0]>=0)&&(h[0]<24))&&(h[1]>=0)&&(h[1]<60)){
			
			return 1;
		}
	}
	return 0;
}
int validarlegajo(int *l,int a){
	int i;
	if(l>0){
		for(i=0;i<500;i++){
			if(l[i]==a){
				return 0;
				
			}
		}
		return 1;
	}
	return 0;
}

void ordena(char aux_list[][50])
{
	int i,j;
	char valor_mas_chico[50];
	int pos_mas_chico;

	for (i=0; i < size_array-1;i++)
	{

		strcpy(valor_mas_chico,aux_list[i]);
		pos_mas_chico = i;

		for (j=i+1;j<size_array;j++)
		{
			if(strcmp(valor_mas_chico,aux_list[j]) > 0)
			{
				strcpy(valor_mas_chico,aux_list[j]);
				pos_mas_chico = j;
			}
		}

		if (i != pos_mas_chico)
		{
			strcpy(aux_list[pos_mas_chico],aux_list[i]);
			strcpy(aux_list[i] , valor_mas_chico);
		}

	}







}
