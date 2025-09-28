#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ,i ,A;
    printf("Entrez le nombre qui veux multipli:");
    scanf("%d",&N);
    for (i=1;i<=10;i++){
        int A=N*i;
        printf("%d x %d =%d\n",N,i,A);
    };
    return 0;
}
