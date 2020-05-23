 #include<stdio.h>
void main(){
	float precio;
	float descuento;
	float calculo;
	float precioConDescuento;
	printf("Indtorduzca el precio: \n ");
	scanf("%f",&precio);
	printf("Indtorduzca el porcentaje de descuento: \n");
	scanf("%f",&descuento);
	calculo=(precio*(descuento/100));
	precioConDescuento = (precio -calculo);
	printf("El precio final es: \n %f",precioConDescuento);
	
	
	
	
}
