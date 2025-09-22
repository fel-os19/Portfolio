#include <stdio.h>

int main() {
    int a;//declaramos la variable a que va a ser la n de las filas y columnas n-1
    scanf("%d", &a);//la idea es hacer una x con asteriscos inversos
    while (a < 6){//un while para que no se puedan ingresar numeros menores a 6, ya que la forma queda mal
        printf("ingrese un numero mayor o igual a 6\n");
        scanf("%d", &a);
    }
    for (int i = 1; i <= a-1; i++)//hacemos un for que recorra las partes en blanco en donde esté la i == j  desde la posicion 1
    {
        for (int j = 0; j <= a; j++){//hacemos otro for que recorra las columnas
            if (j==i || j==a-i)//si la j es igual a i o a-i
            {
                printf(" ");//imprimimos un espacio si es i==j o j==a-i
            }else
            {
                printf("*");//si no es ninguna de las dos imprimimos un asterisco
            }
        }
        printf("\n");//hacemos un salto de linea
    }
    return 0;
}

/*

esta idea la saque de un dibujo que hice de una matriz en donde estaba el ejemplo,
y me di cuenta que las posiciones en blanco eran las que cumplian la condicion i==j o j==a-i
desde la posicion 1, y en otro caso se imprimia un asterisco pero luego el 1 iba incrementando

*/