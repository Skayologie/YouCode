#include <stdio.h>

int main() {
    int n, facteur;

    printf("Entrez le nombre d elements dans le tableau : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre d'elements doit etre superieur a zero.\n");
        return 1;
    }

    int tableau[n];

    printf("Entrez %d elements :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    for (int i = 0; i < n; i++) {
        tableau[i] *= facteur;
    }

    printf("Le tableau apres multiplication est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n");
    return 0;
}

