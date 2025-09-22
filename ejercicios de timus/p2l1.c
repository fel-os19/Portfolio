#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);//pedimos el tamaño de los arreglos
    char arreglo1[a];//declaramos el primer arreglo de tamaño a
    char arreglo2[a];//declaramos el segundo arreglo de tamaño a
    char resultado[2*a];//declaramos el arreglo resultado de tamaño 2a
    for(int i=0; i<a; i++)//llenamos el primer arreglo
    {
        scanf(" %c", &arreglo1[i]);//pedimos los elementos del primer arreglo
    }
    for(int i=0; i<a; i++)//llenamos el segundo arreglo
    {
        scanf(" %c", &arreglo2[i]);//pedimos los elementos del segundo arreglo
    }
    for(int i=0; i<a; i++)//llenamos el arreglo resultado
    {
        resultado[2*i]=arreglo1[i];//llenamos las posiciones pares con los elementos del primer arreglo ya que el primero empieza en la posicion 0 y es par
        resultado[2*i+1]=arreglo2[i];//llenamos las posiciones impares con los elementos del segundo arreglo el segundo empieza en la posicion 1 y es impar
    //ocupamos el 2*i+1 ya que sirve mucho para poder elegir el siguiente numero de la lista y no quede vacio
    }
    for(int i=0; i<2*a; i++)
    {
        printf("%c", resultado[i]);//printeamos el arreglo resultado que intercala elementos de los dos arreglos
    }
    return 0;
}