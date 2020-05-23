 #include<stdio.h>
void main(){
float radio;
float pi = 3.1416;
float perimetro;
float area;
float volumen;
printf("Introdusca el radio: \n");
scanf("%f",&radio);
perimetro= 2*pi*radio;
area= pi*radio*radio;
volumen= 4*pi*radio*radio*radio /3;
printf("El perimetro es: %f \n",perimetro);
printf("El area es: %f \n ",area);
printf("El volumen es: %f",volumen);

	
}
