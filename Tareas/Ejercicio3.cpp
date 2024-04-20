#include<stdio.h>
int main(){
	int n;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	if(n>100){
		printf("\nEl numero es mayor a 100");
	} else{
		printf("El numero no es mayor a 100");
	}
	return 0;
}