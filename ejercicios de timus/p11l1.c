/*

Si un estudiante obtiene calificaciones satisfactorias, no se le otorga la beca, correspondiendo a "Ninguna", con valor 3
Si un estudiante ha superado el período de exámenes con sólo excelentes calificaciones, obtiene una beca personal, que corresponde a "Nombrada", con valor 5
Si un estudiante no obtiene una beca personal y su nota media no es inferior a 4,5, obtiene una beca alta, que corresponde a "Alta", con valor 4
Si un estudiante no obtiene ni una beca alta ni una beca personal y no tiene notas satisfactorias, obtiene una beca común. que corresponde a "Común", con valor 3
Una calificación satisfactoria corresponde a un valor 3, una buena a un valor 4 y una excelente a un valor 5.
*/
#include <stdio.h>
int main(){
int n,m;
if(scanf("%d",&n)!=1)return 0;
int sum=0;
int hay3=0;
int all5=1;
scanf("%d",&m);
for(int i=0;i<n;i++){
    if(m!=1)
    return 0;
    sum+=m; 
    if(m==3)
    hay3=1; 
    if(m!=5)
    all5=0;
}
if(hay3)
printf("None\n");
else if(all5)
printf("Named\n");
else if((double)sum/n>=4.5)
printf("High\n");
else printf("Common\n");
return 0;
}

