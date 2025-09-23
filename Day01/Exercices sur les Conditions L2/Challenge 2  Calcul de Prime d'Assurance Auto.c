#include <stdio.h>

int main() {
    int age, type_voiture, nb_accidents;
    float prime_base, prime_finale;
    printf("Entrez l'age du conducteur: ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1: Sportive, 2: Utilitaire, 3: Familiale): ");
    scanf("%d", &type_voiture);

    printf("Entrez le nombre d'accidents des 5 dernieres annees: ");
    scanf("%d", &nb_accidents);

    printf("Entrez la prime de base: ");
    scanf("%f", &prime_base);

    if(age < 25)
        prime_finale = prime_base * 1.5;
    else if(age <= 65)
        prime_finale = prime_base;
    else
        prime_finale = prime_base * 1.2;

    if(type_voiture == 1)
        prime_finale *= 2;
    else if(type_voiture == 2)
        prime_finale *= 1.2;
    else if(type_voiture == 3)
        prime_finale *= 1.1;

    if(nb_accidents > 1)
        prime_finale *= 1.3;

    printf("La prime d'assurance finale est: %.2f\n", prime_finale);

    return 0;
}
