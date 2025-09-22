#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);//pedimos m y n que seran los numeros enteros 
    //m es el modulo y n es el rango
    for (int i = 1; i <= n; i++) {//bucle que va desde 1 hasta n que es el rango
        printf("%d ", i % m);//revisamos el modulo de i con m y lo imprimimos
    }
    return 0;
}
//buena forma de sacar los binarios