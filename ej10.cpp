#include <stdio.h>
#include <stdlib.h>
int main(){
	int elemento[10],x=0,suma=0,producto=1,gwa=0;
	float p=0;
	printf("ingrese 10 numeros ");
	for(x=0;x<10;x++){
		scanf("%d",&elemento[x]);
		suma=suma+elemento[x];
		producto=producto*elemento[x];
	}
	p=suma/10;
	
	for(x=0;x<10;x++){
	if(elemento[x]<p){
		gwa=gwa+1;
	}
     }
     printf("\nla suma de los numeros ingresados es %d ",suma);
      printf("\nel producto de los numeros ingresados %d ",producto);
       printf("\nel promedio de todos los numeros es %f y la cantidad de elementos que estan por debajo del son %d ",p,gwa);
     return 0;
}

