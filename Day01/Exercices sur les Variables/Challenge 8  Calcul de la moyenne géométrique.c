#include <stdio.h>

int main() {
    int m1 , m2 , m3 ,mg;
    printf("Veuillez entrez 1er moyenne :");
    scanf("%d",&m1);
    printf("Veuillez entrez 2eme moyenne :");
    scanf("%d",&m2);
    printf("Veuillez entrez 3eme moyenne :");
    scanf("%d",&m3);
    mg = (m1*m2*m3)^(1/3);
    printf("Votre Moyenne geometrique est : %d",mg);
return 0;
}