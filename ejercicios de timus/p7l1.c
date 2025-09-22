#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {// Validar entrada positiva
        printf("Entrada invalida\n");
        return 0;// Salir si n no es positivo
    }

    int x = (n % 2 == 0) ? (n / 2) : -((n + 1) / 2);// Calcular x basado en la paridad de n y manejar n negativo
    printf("%d\n", x);// Imprimir x que es la mitad de n si n es par, o la mitad negativa de n si n es impar
    return 0;
}
