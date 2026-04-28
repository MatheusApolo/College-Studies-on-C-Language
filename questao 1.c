#include <stdio.h>
#include <conio.h>

int main() {
	
float n1;
float n2;
float n3;

  printf("Nota 1: ");
	scanf("%f",&n1);
	
  printf("Nota 2: ");
    scanf("%f",&n2);
    
  printf("Nota 3: ");
    scanf("%f",&n3);
    
 float media = (n1 + n2 + n3) / 3;

  printf("Media: %.1f", media);


  if(media >= 7) {
  	printf("\nSituacao: Aprovado");
  }
	if(media >= 5 && media < 7) {
	  printf("\nSituacao: Recuperacao");
    }
	  if(media < 5) {
	  	printf("\nSituacao: Reprovado");
	  }
	       
	  
	return 0;
}
