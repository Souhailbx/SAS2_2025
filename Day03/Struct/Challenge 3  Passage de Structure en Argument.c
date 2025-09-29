// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct rectangle {
    int largeur;
    int longeur;
};
int area(struct rectangle A){
  return A.largeur*A.longeur;
}
int main() {
    struct rectangle A;
    printf("Entrez le longeur:");
    scanf("%d",&A.longeur);
    printf("Entrez le largeur :");
    scanf("%d",&A.largeur);
   printf("L'air de rectengel est :%d",area(A));
    return 0;
}