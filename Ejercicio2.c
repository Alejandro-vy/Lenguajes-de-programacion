 #include<stdio.h>
void main(){
	int ladoA;
	int ladoB;
	int perimetro;
	int area;
	printf("Intrduzca valor del primer lado: \n ");
	scanf("%d",&ladoA);
	printf("Intrduzca valor del segundo lado: \n ");
	scanf("%d",&ladoB);
	perimetro = (ladoA*2+ladoB*2);
	area = (ladoA*ladoB);
		printf("El perimetro es:  %d \n",perimetro);
		printf("El area es:  %d",area);
		
}
