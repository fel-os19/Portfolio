#include <stdio.h>
#include <math.h>

int main(){
    float base = 0.0;//empezamos desde una base 0.0 ya que al ser float si pones 0 no más se rompe
    int n;
    scanf("%d", &n);//pedimos n, que es la cantidad de repeticiones
    for (int i = 1; i <= n; i++)
    {
        base += pow(-1,i+1) / (2*i - 1);//usamos la formula de la serie de leibniz. Ocupe la libreria math para usar pow, que es potencia
    }
    printf("%.6f", base);
    return 0;
}
/*
en el ejemplo sale que con n=1 da 0.834921 
y por esa lógica no sigue la serie, supongo que lo que hice está bien,
ya que sigue la serie.     
Lo que si, el de 50 sigue la serie y da 0.780399
*/