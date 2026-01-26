#include <stdio.h>
#include <stdlib.h> // Para abs()

int main() {
    int numero;

    printf("Ingrese un número entero: ");

    // Validar que la entrada sea un número entero
    if (scanf("%d", &numero) != 1) {
        printf("Error: entrada inválida. Debe ingresar un número entero.\n");
        return 1; // Salir con código de error
    }

    // Determinar si es par o impar
    if (numero % 2 == 0) {
        printf("El número %d es PAR.\n", numero);
    } else {
        printf("El número %d es IMPAR.\n", numero);
    }

    return 0; 
}