#include <stdio.h>
#include <conio.h>

int main() {

int numeros[10];
int i;
int maior = 0;
int menor = 999999999;
float media = 0;

printf("Digite 10 Numeros: \n");

for(i = 0; i < 10; i++) {
	scanf("%d",&numeros[i]);
	media = media + numeros[i];
} 

for(i = 0; i < 10; i++) {
	if(numeros[i] > maior) {
		maior = numeros[i];
	}
	
	if(numeros[i] < menor) {
		menor = numeros[i];
	}
}
media = (media / 10);

printf("\nMaior: %d", maior);
printf("\nMenor: %d", menor);
printf("\nMedia: %.2f", media);
printf("\nValores acima da media: ");

for(i = 0; i < 10; i++) {
	if(numeros[i] > media) {
		printf("%d ", numeros[i]);
	}
}
return 0;
}
