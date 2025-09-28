#include <stdio.h>

int main() {
    int N,X,A,i;

    printf("Entrez la base : ");
    scanf("%d",&N);
    printf("Entrez le exposant :");
    scanf("%d",&X);
    A=1;
    for (i=1;i<=X;i++){
        A=A*N;
    }
    printf("La resultat est :%d",A);
    return 0;
}
