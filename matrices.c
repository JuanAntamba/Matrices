#include <stdio.h>

int main() {
    int n, m;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = 0;
        }
    }
}





