#include <stdio.h>

int main() {
    int N, i;

    printf("Entrez un nombre : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("%d ,", 2*i + 1);
    }

    return 0;
}
