#include <stdio.h>

int main(){
    float base = 0.0;//lo mismo que en p1l1, empezamos desde 0.0, por el problema del float, una base
    int m;
    scanf("%d", &m);//pedimos m, que es la cantidad de terminos a sumar
    for (int i = 1; i <= m; i++)//usamos un for que itere m veces
    {
        base += 1.0 / i;//usamos la formula de la serie armonica que está en el listado
    }
    printf("%.6f", base);//printeamos el resultado con 6 decimales
    return 0;
}       