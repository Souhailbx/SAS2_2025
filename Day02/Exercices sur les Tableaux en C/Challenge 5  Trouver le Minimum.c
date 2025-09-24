#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Entrez le nombre d'element du tableau :");
    scanf("%d",&n);
    int TBL[n];
    for (i=0;i<n;i++){
        printf("Entrez l'element %d:", i + 1);
        scanf("%d",&TBL[i]);
    }
     int min = TBL[0];
    for (int i=1;i>n;i++){
        if (min > TBL[i])
            min = TBL[i];
    }

    printf("Le Minimum des element  est :%d",min);
    return 0;
}