#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int tableau[n];
    for(i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("Les elements du tableau sont :\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
