#include <stdio.h>
// ce un prograamme qui Fusionner deux tableaux en un seul.

int main() {

      int n, i;
      scanf("%d", &n);

    int tab1[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }
       int m;
       scanf("%d", &m);

    int tab2[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }
       int tab3[n + m];
       for (i = 0; i < n; i++) {
            tab3[i] = tab1[i];
        }
        for (i = 0; i < m; i++) {
            tab3[n + i] = tab2[i];
        }

printf("Tableau fusionné : ");

     for (i = 0; i < n + m; i++) {
        printf("%d ", tab3[i]);
     }
    printf("\n");
return 0;
}