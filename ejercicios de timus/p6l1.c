#include <stdio.h>
//escribir todos los primero numeros y ver si son perfectos
//un numero perfecto es uno que es igual a la suma de sus divisores propios
int main(){
    int n;
    scanf("%d", &n);//pedimos el numero
    for(int i=1; i<=n; i++){
        int suma=0;//suma de los divisores propios con base 0
        for(int j=1; j<i; j++){
            if(i%j==0){//si j es un divisor propio de i entonces lo sumamos
                suma+=j;
            }
        }
        if(suma==i){//si la suma de los divisores propios es igual al numero entonces es perfecto
            printf("%d", i);//imprimimos el numero si se cumple la condicion
        }
        else    printf("0");//si no es perfecto imprimimos 0
    }
    return 0;
}