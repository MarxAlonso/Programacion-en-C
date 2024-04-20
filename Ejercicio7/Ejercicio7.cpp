//Hacer un programa en c. Que me permita pedir 20 numeros naturales y que determine e imprima cuantos son parea, impares, positivos y negativos
#include<stdio.h>
int main(){
	int n, cPar=0, cImpar=0, cPos=0, cNeg=0;
	for(int i=0;i<20;i++){
		printf("Ingrese el valor %d:\n",i+1);
		scanf("%d",&n);
		if(n%2==0){
			cPar++;
		} else{
			cImpar++;
		}
		
		if(n>0){
			cPos++;
		} else{
			cNeg++;
		}
	}
	printf("La cantidad de numeros pares es: %d\n",cPar);
	printf("La cantidad de numeros impares es: %d\n",cImpar);
	printf("La cantidad de numeros positivos es: %d\n",cPos);
	printf("La cantidad de numeros negativos es: %d\n",cNeg);
	return 0;
}