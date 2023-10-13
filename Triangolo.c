#include <stdio.h>

int main() {
    int n = 10; // Altezza del triangolo
        // Stampa la base del triangolo
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    
        // Stampa il vertice del triangolo
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }

    

    // Stampa il secondo triangolo rettangolo identico a testa in giù
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
        // Stampa il primo triangolo rettangolo con la base a destra
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
