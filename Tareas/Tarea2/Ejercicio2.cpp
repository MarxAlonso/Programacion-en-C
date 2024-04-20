#include <stdio.h>
//funcion para hallar el numero primo
int nPrimo(int n) {
    if (n <= 1) {
        return 0;  // Los números menores o iguales a 1 no son primos
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // El número es divisible por otro número, por lo que no es primo
        }
    }
    return 1;  // El número es primo
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número del 1 al 5
    printf("Ingresa un numero del 1 al 5: ");
    scanf("%d", &n);

    // Verificar si el número es válido
    if (n >= 1 && n <= 5) {
        if (nPrimo(n)) {
            printf("%d es un numero primo.\n", n);
        } else {
            printf("%d no es un numero primo.\n", n);
        }
    } else {
        printf("Número fuera del rango especificado.\n");
    }

    return 0;
}
