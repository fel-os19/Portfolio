#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);//pedimos n y m, los cuales son m el multiplo y n la cantidad de repeticiones del while
    while (n > 0){//como condicion para el while, usamos n>0, ya que n es la cantidad de repeticiones
        int numero;
        scanf("%d", &numero);//pedimos el numero que vamos a ver si es multiplo de m
        if (numero % m == 0){
            printf("%d ", numero);//printeamos el numero si es multiplo de m
        }
        n--;//restamos 1 a n para que el while pueda terminar
    }

    return 0;
}
