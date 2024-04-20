//Hacer un programa en c. Que permita ingresar la nota n alumnos, luego debe mostrar la cantidad de aprobados
//(mayor o igual a 12) y tambien me debe mostrar la cantidad de desaprobados (menor a 12)
// 1. Validar n debe ser un valor positivo
//2.Validar la nota de los estudiantes entre 0 y 20
//3.No se debe interrumpir el programa si se ingresa datos erróneos 
#include<stdio.h>
int main(){
	int i=0;
	int alumnos, notas, aprobados=0, desaprobados=0;
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d",&alumnos);
	while(i<alumnos){
		notas=0;
		printf("\nIngrese la nota %d:",i+1);
		scanf("%d",&notas);
		if(notas<0||notas>20){
			i--;
			printf("Es un dato erróneo. Intentar de nuevo\n");
			continue;
		}
		if(notas<12){
			desaprobados++;
		} else{
			aprobados++;
		}
		i++;
	
	}
	printf("Cantidad de aprobados: %d",aprobados);
	printf("Cantidad de desaprobados: %d",desaprobados);
	return 0;
}