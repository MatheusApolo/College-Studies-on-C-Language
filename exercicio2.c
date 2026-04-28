#include <stdio.h>

void leMatriz3(int m[3][3]) {
	
int i;
int j;
    
    printf("Digite os valores:\n");
    for( i = 0; i < 3; i++ ){
        for( j = 0; j < 3; j++){
            scanf("%d",&m[i][j]);
        }
    }
}

void subtraiMatriz(int a[3][3], int b[3][3], int d[3][3]) {
   
    int i;
	int j;
	
    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++ ){
            d[i][j] = a[i][j] - b[i][j];
        }
    }
}

void transposta(int m[3][3], int t[3][3]) {
	
int i;
int j;

    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            t[j][i] = m[i][j];
        }
    }
}

void imprimeMatriz3(int m[3][3]) {

int i; 
int j;

    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {

int A[3][3];
int B[3][3];
int D[3][3];
int T[3][3];

    printf("Matriz A:\n");
    leMatriz3(A);

    printf("Matriz B:\n");
    leMatriz3(B);

    subtraiMatriz(A,B,D);

    transposta(D,T);

    printf("\nResultado D:\n");
    imprimeMatriz3(D);

    printf("\nTransposta:\n");
    imprimeMatriz3(T);

    return 0;
}
