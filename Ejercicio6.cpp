//Hacer un programa en c. Donde nos permita ingresar datos el de 1 hasta 5 y hallar la suma de estos numeros
#include<stdio.h>
int main(){
	int n=0, suma=0;
	for(int i=0;i<5;i++){
		printf("Ingrese el valor %d:\n",i+1);
		scanf("%d",&n);
		suma+=n;
	}
	printf("La suma de los numeros es: %d",suma);
	return 0;
}