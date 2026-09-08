#include <stdio.h>

int main(void) {

    int n;
    int resultat = 1;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    printf("Le factoriel de %d est %d\n", n, resultat);
    return 0;
}