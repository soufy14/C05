#include <stdio.h>
// ce un programme qui permet de trouver et afficher le plus petit element 
int main() {

    int n, i;
    int Min;
    scanf("%d", &n);

    int tab[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);

    }
    Min = tab[0];
    for (i = 1; i < n; i++) {
      if (tab[i] < Min) {
       Min = tab[i];   
    }
    }
    printf("Le minimum est : %d\n", Min);

    return 0;
}