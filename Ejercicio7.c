#include<stdio.h>
#include <math.h>
void main(){
	int a,b,c;
	printf("Introduzca el coeficiente a \n");
	scanf("%d",&a);
		printf("Introduzca el coeficiente b \n");
	scanf("%d",&b);
		printf("Introduzca el coeficiente c \n");
	scanf("%d",&c);
	int raiz1 = (a+sqrt(b*b - 4*a*c))/2;
	int raiz2 =(a-sqrt(b*b - 4*a*c))/2;
		printf("la primera raiz es: %d \n",raiz1);
		printf("la segunda raiz es : %d ",raiz2);
		
	
	
	
}
