#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,F,i;
    printf("Entrez un nombre :");
    scanf("%d",&N);
    F=1;
    for (i=1;i<=N;i++){
        F=F*i;
    }
    printf("Votre Factoreille est :%d",F);
    return 0;
}
