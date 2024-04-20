#include <stdio.h>

int main() {
    float n1, n2, n3;

    // Solicitar al usuario que ingrese tres números
    printf("Ingresa el primer número: ");
    scanf("%f", &n1);
    printf("Ingresa el segundo número: ");
    scanf("%f", &n2);
    printf("Ingresa el tercer número: ");
    scanf("%f", &n3);

    // Ordenar los números de mayor a menor
    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Los números ordenados de mayor a menor: %.2f, %.2f, %.2f\n", n1, n2, n3);
        } else {
            printf("Los números ordenados de mayor a menor: %.2f, %.2f, %.2f\n", n1, n3, n2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Los números ordenados de mayor a menor: %.2f, %.2f, %.2f\n", n2, n1, n3);
        } else {
            printf("Los números ordenados de mayor a menor: %.2f, %.2f, %.2f\n", n2, n3, n1);
        }
    } else {
        if (num1 >= num2) {
            printf("Los números ordenados de mayor a menor: %.2f, %.2f, %.2f\n", n3, n1, n2);
        } else {
            printf("Los números ordenados de mayor a menor: %.2f, %.2f, %.2f\n", n3, n2, n1);
        }
    }

    return 0;
}