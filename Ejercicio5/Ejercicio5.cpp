#include <stdio.h>
int main(){
	char nombre[20], apellidos[30];
	float n1, n2, n3;
	float prom;
	
	printf("Ingrese nombre del alumno: ");
	scanf("%s",nombre);
	printf("Ingrese apellidos del alumno: ");
	scanf("%s",apellidos);
	
	printf("Ingrese nota 1: ");
	scanf("%f",&n1);
	printf("Ingrese nota 2: ");
	scanf("%f",&n2);
	printf("Ingrese nota 3: ");
	scanf("%f",&n3);
	
	prom = (n1+n2+n3)/3;
	printf("Su promedio es: %f\n",prom);
	
	if(prom>=11.5){
		printf("El alumno %s", nombre);
		printf(" %s", apellidos);
		printf(". Esta aprobado");
	} else{
		printf("El alumno %s", nombre);
		printf(" %s", apellidos);
		printf(". Esta desaprobado");
	}
	
	return 0;
}