#include <stdio.h>

int main() {
    float V,M;
    printf("Vuillez Entrez la vitesse en kilomètres par heure (km/h) :");
    scanf("%f",&V);
    M = (V * 0.27778);
    printf("La Vitesse en metres par seconde est :%.2f M/S",M);
return 0;
}
