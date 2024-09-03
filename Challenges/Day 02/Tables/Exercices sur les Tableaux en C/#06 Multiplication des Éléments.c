
#include <stdio.h>

int main() {
    int n, facteur;

    // Demander le nombre d'éléments à l'utilisateur
    printf("Entrez le nombre d elements dans le tableau : ");
    scanf("%d", &n);

    // Vérification que le nombre est supérieur à zéro
    if (n <= 0) {
        printf("Le nombre d'elements doit etre superieur a zero.\n");
        return 1;
    }

    // Création du tableau en fonction du nombre d'éléments
    int tableau[n];

    // Saisie des éléments
    printf("Entrez %d elements :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Demander le facteur de multiplication
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    // Multiplication des éléments par le facteur
    for (int i = 0; i < n; i++) {
        tableau[i] *= facteur;
    }

    // Affichage des éléments du tableau résultant
    printf("Le tableau apres multiplication est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n");
    return 0;
}

