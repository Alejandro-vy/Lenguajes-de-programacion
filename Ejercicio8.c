 #include<stdio.h>
void main(){
	int R1;
	int R2;
	int calculo;
printf("Ingrese la primera resistencia \n");
scanf("%d",&R1);
printf("Ingrese la segunda resistencia \n");
scanf("%d",&R2);
calculo=(R1*R2)/(R1+R2);
printf("El resultado es: %d",calculo);
}

