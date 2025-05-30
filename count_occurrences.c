#include <stdio.h>
// Rechercher la fréquence d’un élément dans un tableau

int main() {
    int n, i, x, count = 0;

    scanf("%d", &n);
    int tab[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Lire l'élément à rechercher
    scanf("%d", &x);

    // Balayage du tableau pour compter les occurrences
    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            count++;
        }
    }

    printf("L'élément %d apparaît %d fois.\n", x, count);

    return 0;
}
