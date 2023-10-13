#include <stdio.h>

int main() {
  // Stampa Strutturata
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("+---");
        }
        printf("+\n");

        for (int j = 0; j < 5; j++) {
            printf("|   ");
        }
        printf("|\n");
    }
    
    for (int j = 0; j < 5; j++) {
        printf("+---");
    }
    printf("+\n");

/* Stampa in una sola riga
    printf("+---+---+---+---+---+\n|   |   |   |   |   |\n+---+---+---+---+---+\n|   |   |   |   |   |\n+---+---+---+---+---+\n|   |   |   |   |   |\n+---+---+---+---+---+\n|   |   |   |   |   |\n+---+---+---+---+---+\n");

    return 0;
*/
}


