#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,v,total=0,mayorv,vendedores[20];
    int i=1;
    
    for (x=0;x<20;x++){
printf("Ingrese el total de unidades vendidas en 15 dias por el vendedor %d ",i);
scanf("%d",&vendedores[x]);
i++;
}

for (x=0;x<20;x++){
total=total+vendedores[x];	
};
for (x=0;x<20;x++){	
	if (mayorv<vendedores[x])
       mayorv=vendedores[x]; 	   	     
};		 	     
mayorv=mayorv/15;
printf("\n El total es %d",total);
printf("\n La mayor venta diaria es %d por el vendedor %d",mayorv,i);

return 0;
}
