#include <stdio.h>
// ce programme Effectuer une rotation à gauche d’un tableau (le premier élément passe en dernier).

int main() {

   int n, i;

   scanf("%d", &n);

   int tab[n];

   for (i = 0; i < n; i++) {
    scanf("%d", &tab[i]);
   }

   int first = tab[0];
   for (i = 0; i < n - 1; i++) {
      tab[i] = tab[i +1];
   }
   tab[n - 1] = first;

printf("Tableau après rotation : ");
for (i = 0; i< n; i++) {
 
       printf("%d ", tab[i]);
}
printf("\n");
return 0;
}