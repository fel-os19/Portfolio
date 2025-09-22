#include <stdio.h>

//esto de aquí es como yo entendí el problema para que no se me olvidara
//si escribo mal es porque creo que tengo dislexia xd

/*
el problema consiste en dos arreglos
el primero es un arreglo de largo n 
que tenemos que buscar cuantas veces se pueden mover los ultimos k elementos
al inicio del arreglo unas m veces
y el segundo es un arereglo de largo n 
que si es uno de las rotaciones del primero diga que si
y si no diga que no, tambien diga el numero m
de rotaciones que se hicieron
*/

//me costó más que la cresta xd

int main (){
    int n;
    scanf("%d",&n);//pedimos el largo de los arreglos
    int a[n],b[n];//pedimos los arreglos
    for (int i = 0; i < n; i++){//este arreglo es el que se va a rotar m veces
        scanf("%d",&a[i]);//pedimos los elementos del arreglo del 0 al n-1
    }
    for (int i = 0; i < n; i++){//este arreglo es el que se va a comparar con las rotaciones del primer arreglo
        scanf("%d",&b[i]);//pedimos los elementos del arreglo del 0 al n-1
    }
    int k,m;//k es el numero de elementos que se van a mover al inicio del arreglo
    int contador=0;//comtador para saber si se encontró una rotación que coincida
    for (k = 1; k < n; k++){//k va a variar
        //ahora tenemos que hacer m rotaciones
        for (m = 1; m <= n; m++){//m va a variar
            //hacemos la rotación
            int c[n];//arreglo temporal para hacer la rotación
            for (int i = 0; i < n; i++){//recorremos el arreglo
                c[i]=a[(i+n-k)%n];//hacemos la rotación
            }
            //ahora comparamos el arreglo c con el arreglo b
            int igual=1;//igual es una variable que nos dice si los arreglos son iguales
            for (int i = 0; i < n; i++){//recorremos los arreglos
                if (c[i]!=b[i]){//si los elementos no son iguales
                    igual=0;//igual es 0
                    break;//salimos del ciclo
                }
            }
            if (igual){//si los arreglos son iguales
                printf("SI los ultimos %d elementos y %d rotaciones\n",k,m);//imprimimos que si son iguales y los valores de k y m
                contador=1;//contador es 1
                break;//salimos del ciclo de m
            }
            //si no son iguales, hacemos otra rotación
            for (int i = 0; i < n; i++){//recorremos el arreglo
                a[i]=c[i];//actualizamos el arreglo a con la rotación
            }
        }
        if (contador){//si ya encontramos una rotación que coincida, salimos del ciclo de k
            break;
        }
    }
    if (!contador){//si no se encontró ninguna rotación que coincida
        printf("NO\n");//imprimimos que no
    }
    return 0;
}
//se puede optimizar más el código pero ya me dio paja xd