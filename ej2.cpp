#include <stdio.h>
#include <stdlib.h>
int main(){
int x,np=0,numero[5],nm;
for (x=0;x<5;x++){
printf("Ingrese los numeros ");
scanf("%d",&numero[x]);

if (nm<numero[x]){
nm=numero[x];};
}

for (x=0;x<5;x++){

np=np+numero[x];
}
np=np/5 ;
printf("\n El promedio es %d",np);
printf("\n El numero mas grande es %d",nm);
return 0;
}
