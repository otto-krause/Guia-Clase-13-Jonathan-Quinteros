#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,da8=0,nota[15],i=1,v;
    for (x=0;x<15;x++){
printf("\nIngrese la nota del alumno %d ",i);
scanf("%d",&nota[x]);

if(nota[x]>8){
printf("\n alumno %d tiene nota con mas de ocho",i);
da8++;
}
i++;
}
printf("\n%d alumnos tienen notas con mas de ocho",da8);
return 0;
}
