#include <stdio.h>

void calcSquare(int matriz[][100], int tamanho) {
    int somaPrincipal = 0;
    int somaSecundaria = 0;

    for (int i = 0; i < tamanho; i++) {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][tamanho - i - 1];
    }

    printf("Soma da Diagonal Principal: %d\n", somaPrincipal);
    printf("Soma da Diagonal Secundaria: %d\n", somaSecundaria);
}

int main() {
    int tamanho;

    printf("Digite o tamanho da matriz (n x n): ");
    scanf("%d", &tamanho);

    int matriz[100][100];

    printf("Digite os elementos da matriz:\n");

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    calcSquare(matriz, tamanho);

    return 0;
}