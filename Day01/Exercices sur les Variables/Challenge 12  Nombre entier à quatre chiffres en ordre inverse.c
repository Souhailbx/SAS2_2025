#include <stdio.h>

int main() {
    char n[5];
    printf("Entrez un entier a 4 chiffres : ");
    scanf("%4s", n);

    printf("L'inverse est : %c%c%c%c\n", n[3], n[2], n[1], n[0]);

    return 0;
}