#include <stdio.h>

int main() {
    float nb1 , nb2 , nb3 ,my;
    printf("Veuillez entrez 1er nombre :");
    scanf("%f",&nb1);
    printf("Veuillez entrez 2eme nombre :");
    scanf("%f",&nb2);
    printf("Veuillez entrez 3eme nombre :");
    scanf("%f",&nb3);
    my = (nb1*2)+(nb2*3)+(nb3*5);
    printf("Votre Moyenne est : %.2f",my);
return 0;
}