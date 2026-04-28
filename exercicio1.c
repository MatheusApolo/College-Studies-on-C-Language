#include <stdio.h>

void leMatriz(int m[5][5]) {
	
int i;
int j;
    
    printf("Digite os numeros da matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}
 
int buscaPosicao(int m[5][5], int x, int *linha, int *coluna) {
	
int i;
int j;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (m[i][j] == x) {
                *linha = i;
                *coluna = j;
                return 1;
            }
        }
    }
    return 0;
}
 
int main() {
	
int matriz[5][5];
int x;
int lin;
int col;
int achou;
 
leMatriz(matriz);
 
    printf("\nDigite o valor a buscar: ");
    scanf("%d", &x);
 
    achou = buscaPosicao(matriz, x, &lin, &col);
 
    if (achou == 1) {
        printf("Encontrado em (%d, %d)\n", lin + 1, col + 1);
    } else {
        printf("Nao encontrado\n");
    }
 
    return 0;
}
