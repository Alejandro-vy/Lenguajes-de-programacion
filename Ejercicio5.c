 #include<stdio.h>
void main(){
	int dias,horas,minutos;
	printf("introduzca los dias");
	scanf("%d",&dias);
	printf("introduzca las horas");
	scanf("%d",&horas);
	printf("introduzca los minutos");
	scanf("%d",&minutos);
	int calculoDias = dias*86400;
	int calculoHoras = horas*3600;
	int calculoMinutos = minutos*60;
	int calculoTotal = calculoDias+calculoHoras+calculoMinutos;
	printf("En total son %d segundos  \n",calculoTotal);
}
