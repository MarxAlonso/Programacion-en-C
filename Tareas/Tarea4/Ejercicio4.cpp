#include<stdio.h>
int main(){
	int n;
	printf("Ingrese un numero: ");
	scanf("%d",&n);
	if(n==0){
		printf("\nEl numero es 0");
	}
	if(n>0){
		printf("\nEl numero es entero");
	} else{
		printf("\nEl numero es negativo");
	}
	return 0;
}