#include<stdio.h>
//Ingrese las tres primeras notas de un alumno. Si su promedio es mayor o igual a 11.5, y tenga que salir un
// mensaje de aprobado, caso contrario tiene que salir un mensjae de desaprobado.
int main(){
	float nota1, nota2, nota3, promPrinc, prom=11.5;
	printf("Ingrese la primera nota: ");
	scanf("%f", &nota1);
	printf("Ingrese la segunda nota: ");
	scanf("%f", &nota2);
	printf("Ingrese la tercera nota: ");
	scanf("%f", &nota3);
	
	promPrinc=(nota1+nota2+nota3)/3;
	printf("Su promedio es: %f\n", promPrinc);
	if(promPrinc>=prom){
		printf("Alumno aprobado");
	}
	if(promPrinc<prom){
		printf("Alumnos desaprobado");
	}
}
