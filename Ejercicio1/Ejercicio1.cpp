#include<stdio.h>
int main(){
	float altura, base, areaT, areaRect;
	printf("Ingrese la altura: ");
	scanf("%f",&altura);
	printf("Ingrese la base: ");
	scanf("%f",&base);
	areaT = altura*base/2;
	areaRect = base*altura;
	printf("El area del triangulo es:%f",areaT);
	printf("El area del rectangulo es:%f",areaRect);
	return 0;
}
