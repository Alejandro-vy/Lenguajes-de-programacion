#include<stdio.h>
void main(){
	int segundos;
	printf("Introduzca los segundos \n");
	scanf("%d",&segundos);
	int minutos = segundos/60;
	int horas = segundos/3600;
	int dias = segundos/86400;
	printf("Es equivalente a %d minutos \n",minutos);
	printf("Es equivalente a %d horas \n",horas);
	printf("Es equivalente a %d dias ",dias);
	
	

}
