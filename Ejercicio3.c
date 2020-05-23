#include<stdio.h>
void main(){
	float dolar;
	float conversion;
	printf("Ingrese cantidad de dolares: \n");
	scanf("%f",&dolar);
	conversion = (dolar*0.91);
	printf("Equivale a %f euros",conversion);
	
}
