#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,mayor=0,menor=0,sueldo[20];
    for (x=0;x<20;x++){
  printf("Ingrese el sueldo ");
  scanf("%d",&sueldo[x]);  
  if(sueldo[x]>2000){
    mayor++;
    }else{menor++; }
     }
  printf("\n %d ganan mas de 2000 ",mayor);
  printf("\n %d ganan menos de 2000",menor);
  return 0;
} 	
