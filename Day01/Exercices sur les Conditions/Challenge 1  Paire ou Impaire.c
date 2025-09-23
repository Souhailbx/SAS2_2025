#include <stdio.h>

int main() {
    int A;
    printf("Veuillez entrez le premeir nombre :");
    scanf("%d",&A);
    if (A%2==0){
        printf("Cette nombre es pair ");
    } else
    printf("Cette nombre est impair ");
    return 0;
}
