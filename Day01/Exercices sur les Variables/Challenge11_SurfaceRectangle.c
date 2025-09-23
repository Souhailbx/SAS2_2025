#include <stdio.h>
#include <math.h>

int main() {
    int longueur , largeur , surface;
    printf("Veuillez entrez longueur de rectangle :");
    scanf("%d", &longueur);
    printf("Veuillez entrez largeur de rectangle :");
    scanf("%d", &largeur);
    surface = longueur * largeur;
    printf("Votre Surface est :%d",surface);


return 0;
}