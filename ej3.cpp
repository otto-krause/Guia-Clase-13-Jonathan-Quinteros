#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,nm=0,nme=0,numeros[2];
	for (x=0;x<2;x++){
	printf("Ingrese un numero ");
	scanf("%d",&numeros[x]);};
		
for (x=0;x<2;x++){
	if (nm<numeros[x])
       nm=numeros[x]; 	     
}
   nme=nm;
for (x=0;x<2;x++){  
   if (nme>numeros[x])
       nme=numeros[x];}
       
    int i=nme;
    while (nm>=i){
        printf("\n%d",i);
        i=i+1;}
   return 0;
	}

