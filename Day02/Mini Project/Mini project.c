#include <stdio.h>
#include <string.h>

#define MAX 100
#define STR_LEN 50

int main() {
    char titres[MAX][STR_LEN];
    char auteurs[MAX][STR_LEN];
    float prix[MAX];
    int quantite[MAX];
    int nbLivres = 0;

    int choix;

    do {
        printf("\n=====> GESTION DE LIBRAIRIE <=====\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("0. Quitter\n");
        printf("==================================\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        printf("==================================\n");

        if (choix == 1) {
            if (nbLivres >= MAX) {
                printf("Le stock est plein !\n");
            } else {
                printf("Titre du livre: ");
                scanf(" %[^\n]", titres[nbLivres]);
                printf("Auteur du livre: ");
                scanf(" %[^\n]", auteurs[nbLivres]);
                printf("Prix du livre: ");
                scanf("%f", &prix[nbLivres]);
                printf("Quantité: ");
                scanf("%d", &quantite[nbLivres]);
                nbLivres++;
                printf("Livre ajoute avec succes \n");
            }
        }

        else if (choix == 2) {
            if (nbLivres == 0) {
                printf("Aucun livre en stock.\n");
            } else {
                printf("\n--- Liste des Livres ---\n");
                for (int i = 0; i < nbLivres; i++) {
                    printf("%d) %s | %s | %.2f DH | %d en stock\n",
                           i+1, titres[i], auteurs[i], prix[i], quantite[i]);
                }
            }
        }

        else if (choix == 3) {
            char titre[STR_LEN];
            printf("Entrer le titre du livre a rechercher: ");
            scanf(" %[^\n]", titre);

            int pos = -1;
            for (int i = 0; i < nbLivres; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    pos = i;
                    break;
                }
            }

            if (pos == -1) {
                printf("Livre non trouve.\n");
            } else {
                printf("%s | %s | %.2f DH | %d en stock\n",
                       titres[pos], auteurs[pos], prix[pos], quantite[pos]);
            }
        }

        else if (choix == 4) {
            char titre[STR_LEN];
            printf("Entrer le titre du livre à mettre a jour: ");
            scanf(" %[^\n]", titre);

            int pos = -1;
            for (int i = 0; i < nbLivres; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    pos = i;
                    break;
                }
            }

            if (pos == -1) {
                printf("Livre non trouve.\n");
            } else {
                printf("Nouvelle quantite: ");
                scanf("%d", &quantite[pos]);
                printf("Quantite mise a jour avec succes.\n");
            }
        }

        else if (choix == 5) {
            char titre[STR_LEN];
            printf("Entrer le titre du livre à supprimer: ");
            scanf(" %[^\n]", titre);

            int pos = -1;
            for (int i = 0; i < nbLivres; i++) {
                if (strcmp(titres[i], titre) == 0) {
                    pos = i;
                    break;
                }
            }

            if (pos == -1) {
                printf("Livre non trouve.\n");
            } else {
                for (int i = pos; i < nbLivres - 1; i++) {
                    strcpy(titres[i], titres[i+1]);
                    strcpy(auteurs[i], auteurs[i+1]);
                    prix[i] = prix[i+1];
                    quantite[i] = quantite[i+1];
                }
                nbLivres--;
                printf("Livre supprime avec succes.\n");
            }
        }

        else if (choix == 6) {
            int total = 0;
            for (int i = 0; i < nbLivres; i++) {
                total += quantite[i];
            }
            printf("Nombre total de livres en stock: %d\n", total);
        }

        else if (choix == 0) {
            printf("Au revoir !\n");
        }

        else {
            printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}
