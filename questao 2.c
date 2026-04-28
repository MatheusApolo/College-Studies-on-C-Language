#include <stdio.h>
#include <conio.h>

int main() {

 int inicio;
 int fim;
 int i;
 int total = 0;

printf("Qual o numero de inicio? ");

 scanf("%d",&inicio);
 
printf("Qual o numero final? ");

 scanf("%d",&fim);
 
 printf("Pares encontrados: ");

 for(i = inicio; i <= fim; i++) {
 	
 	if(i % 2 == 0) {
 		printf("%d ",i);
 		 	total++;
	 }
 }

printf("\nTotal de Pares: %d", total);

	return 0;
}

