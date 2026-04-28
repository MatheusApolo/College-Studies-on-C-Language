#include <stdio.h>
#include <conio.h>

int main() {

float saldo = 0;
int escolha = 0;
float saque = 0;
float deposito = 0;
	
printf("Digite o saldo inicial: ");
scanf("%f", &saldo);		
	
	while (escolha != 4) {
		
	printf("\n1 - Consultar Saldo\n2 - Sacar Valor\n3 - Depositar valor\n4 - Sair\n");
	printf("\nDigite um numero para prosseguir: ");
	scanf("%d",&escolha);
	
		if(escolha == 1) {
			printf("\nSaldo atual: R$ %.2f\n",saldo);
		}
		
		if(escolha == 2) {
			printf("\nDigite o valor do saque: ");
			scanf("%f",&saque);
			if(saque > saldo) {
			 	printf("\nSaldo insuficiente!\n");
			 } else {
			 printf("\nSaque realizado com sucesso!\n");
			 saldo = saldo - saque; }
		} 
		
		if(escolha == 3) {
			printf("\nDigite o valor do deposito: ");
			scanf("%f",&deposito);
			saldo = saldo + deposito;
			printf("\nDeposito realizado com sucesso!\n");
		}
		
		if(escolha == 4) {
			printf("\nTchau!!");
		}
	}   
	
	return 0;
}


