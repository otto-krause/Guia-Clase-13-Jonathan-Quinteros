#include <stdio.h>
#include <stdlib.h>
int main(){
int x,rt=0,resitencias[5];
for (x=0;x<5;x++){
printf("Ingrese las resistencia ");
scanf("%d",&resitencias[x]);}
for (x=0;x<5;x++){
printf("\nlas resistencias son %d",resitencias[x]);
rt=rt+resitencias[x];
}
printf("\nla resistencia total es %d",rt);
return 0;
}
