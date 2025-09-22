#include <stdio.h>
//escribir todos los primeros números y ver si son perfectos
//un número perfecto es igual a la suma de sus divisores propios osea en el caso de 6
//1+2+3=6

int main() {
    int n;
    scanf("%d", &n);//pedimos hasta que numero vamos a revisar

    for (int i = 1; i <= n; i++) {
        int suma = 0; //base de la suma de los divisores propios
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {//si j es divisor propio de i
                suma += j;
            }
        }
        if (suma == i) {//si la suma es igual al número
            printf("%d\n", i);//imprimimos el número perfecto
        }
    }

    return 0;
}
//si no es perfecto, no imprimimos nada
