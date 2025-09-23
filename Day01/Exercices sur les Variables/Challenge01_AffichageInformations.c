#include <stdio.h>

int main() {
    char nom[20];
    char prenom[20];
    int age;
    char sexe;
    char email[20];
    printf("Veuillez Entrez Votre Nom : ");
    scanf("%s", nom);

    printf("Veuillez Entrez Votre Prenom : ");
    scanf("%s", prenom);

    printf("Veuillez Entrez Votre Age : ");
    scanf("%d", &age);

    printf("Saisire Votre SEX(M/F): ");
    scanf(" %c", &sexe);

    printf("Veuillez Entrez Votre Adresse Email : ");
    scanf("%s", email);
    printf("Votre Nom est: %s\n", nom);
    printf("Votre Prenom est: %s\n", prenom);
    printf("Votre Age est: %.0d\n", age);
    printf("Votre SEX est: %c\n", sexe);
    printf("Votre Adresse Email est: %s\n", email);

    return 0;
}
