#include <stdio.h>

void transpose(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int a[100][100];
    int m, n;

    printf("Insira o número de linhas: ");
    scanf("%d", &m);

    printf("Insira o número de colunas: ");
    scanf("%d", &n);

    printf("Insira os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matriz após transposição:\n");
    transpose(a, m, n);

    return 0;
}