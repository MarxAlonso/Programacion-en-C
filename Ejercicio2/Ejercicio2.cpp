#include<stdio.h>
int main(){
	float nota1, nota2, nota3, prom;
	printf("Ingrese la primera nota: ");
	scanf("%f", &nota1);
	printf("Ingrese la segunda nota: ");
	scanf("%f", &nota2);
	printf("Ingrese la tercera nota: ");
	scanf("%f", &nota3);
	
	prom = (nota1+nota2+nota3)/3;
	printf("El promedio de las 3 notas es: %f",prom);
	
	return 0;
}