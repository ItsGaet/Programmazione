#include <stdio.h>

int main() {
    int num1, num2, num3;
    int somma, prodotto;
    double media;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    
    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);
    
    somma = num1 + num2 + num3;
    prodotto = num1 * num2 * num3;
    media = (double)(somma) / 3;
    
    int min, max;
    
    if (num1 < num2) {
        min = num1;
        max = num2;
    } else {
        min = num2;
        max = num1;
    }
    
    if (num3 < min) {
        min = num3;
    } else if (num3 > max) {
        max = num3;
    }
    
    printf("Somma: %d\n", somma);
    printf("Media: %.2lf\n", media);
    printf("Prodotto: %d\n", prodotto);
    printf("Minore: %d\n", min);
    printf("Maggiore: %d\n", max);
    
    return 0;
}
