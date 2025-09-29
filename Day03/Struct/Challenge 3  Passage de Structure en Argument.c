// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct rectangle {
    int largeur;
    int longeur;
};
int rectangl(struct rectangle *A){
  return A->longeur * A->largeur;
}
int main() {
    struct rectangle A;
    printf("Entrez le longeur:");
    scanf("%d",&A.longeur);
    printf("Entrez le largeur :");
    scanf("%d",&A.largeur);
    struct rectangle *B=&A;
   printf("L'air de rectengel est :%d",rectangl(B));
    return 0;
}