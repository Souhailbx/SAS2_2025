#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int some=0;
    printf("Entrez le nombre d'element du tableau :");
    scanf("%d",&n);
    int TBL[n];
    for (i=0;i<n;i++){
        printf("Entrez l'element %d:", i + 1);
        scanf("%d",&TBL[i]);
        some +=TBL[i];
    }

    printf("La somme des element  est :%d",some);
    return 0;
}
