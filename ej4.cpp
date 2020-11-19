#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,prom,alumnos[30];
    int i=1;
    for (x=0;x<30;x++){
printf("Ingrese las notas del alumno %d ",i);
scanf("%d",&alumnos[x]);
i++;
prom=prom+alumnos[x];
};
prom=prom/30;
printf("el promedio es %d",prom);

}
