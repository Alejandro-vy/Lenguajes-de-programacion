#include<stdio.h>
void main(){
	int codigo;
	int cantidad;
	int descuento;
	int calcularDescuento;
	float total;
	int calcularIva;
	 
	printf("---Los peques-----\n");
	printf("Ingrese codigo del producto \n");
	scanf("%d",&codigo);
	printf("Ingrese cantidad del producto \n");
	scanf("%d",&cantidad);
	printf("Ingrese descuento del producto \n");
	scanf("%d",&descuento);

	
	if(codigo==123456){
	 int precio=15000;
	 	calcularDescuento = (precio*(descuento/100));
        calcularIva = (precio*0.19);
       	 total = (precio - calcularDescuento + calcularIva);
	
	}

		printf("El codigo es: %d \n",codigo);
			printf("La cantidad que lleva es: %d \n",cantidad);
				printf("El descuento es de: %d \n",descuento);
					printf("El precio total es: %d \n",total);
				

	

}
