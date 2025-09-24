#include <stdio.h>
#include <string.h>
#define MAX 100
#define str_line 50

int main() {
    char titres[MAX][str_line];
    char auteurs[MAX][str_line];
    float prix[MAX];
    int quantite[MAX];
    int nbLivres = 0;

    int choix;
    do {
        printf("\n=====>GESTION DE LIBAIRAIRE<=====\n");
        printf("1: Ajouter Un Livre Au Stock\n");
        printf("2: Afficher Tous Les Livres Disponibles\n");
        printf("3: Rechercher Un Livre\n");
        printf("4: Mettre a Jour La Qauntite D'un Livre\n");
        printf("5: Supprimer Un Livre Du Stock\n");
        printf("6: Afficher Le Nombre Total De Livres En Stock\n");
        printf("0: Exit\n");
        printf("Votre Choix:");
        scanf("%d", &choix);

         if (choix ==1){
            if(nbLivres >=MAX){
                printf("Le Stock Est Plein\n");
            }else {
            printf("Titre Du Livre :");
            scanf(" %[^\n]",titres[nbLivres]);
            printf("Auteur Du Livre :");
            scanf(" %[^\n]",auteurs[nbLivres]);
            printf("Prix Du Livre :");
            scanf("%f",&prix[nbLivres]);
            printf("Quantite:");
            scanf("%d",&quantite[nbLivres]);
            nbLivres++;

            printf("Livre Ajoute avec Succes \n");
            }
         }

         else if (choix == 2){
            if (nbLivres == 0){
                printf("Aucun Livre En Stock.\n");
            }else{
            printf("\n====>Liste Des Livres<====\n");
            for (int i=0;i<nbLivres;i++){
                printf("%d) %s | %s |%.2f DH | %d En Stock\n",
                    i+1,titres[i],auteurs[i],prix[i],quantite[i]);

            }
          }
         }

        else if (choix ==3){
            char titre[str_line];
            printf("Entrez Le Titre Du Livre a Mettre a Jour:");
            scanf(" %[^\n]",titre);

            int position = -1;
            for(int i =0;i<nbLivres;i++){
               if(strcmp(titres[i],titre)==0){
                position =i;
                break;
               }
            }
            if (position == -1){
                printf("Livre Non Trouver.\n");
            }else {
            printf("Nouvelle Quantite : ");

            scanf("%d",&quantite[position]);
            printf("Quantite Mise a Jour Avec Succes.\n");
            }
        }

        else if (choix==4){
            char titre[str_line];
            printf("Entrez Le Titre Du Livre Supprimer: ");
            scanf(" %[^\n]",titre);

            int position = -1;
            for (int i = 0; i<nbLivres;i++){
                if(strcmp(titres[i],titre)==0){
                    position =i;
                    break;
                }
            }
            if (position == -1){
                printf("Livre non Trouver.\n");
            }else{
            for (int i =position;i<nbLivres-1;i++){
               strcpy(titres[i],titres[i+1]);
               strcpy(auteurs[i],auteurs[i+1]);
               prix[i] = prix[i+1];
               quantite[i] = quantite[i+1];
            }
            nbLivres--;
            printf("Livre Supprimer Avec Succes.\n");
            }
        }
        else if (choix ==5){
            int total = 0;
            for(int i=0;i<nbLivres;i++){
                total += quantite[i];
            }
            printf("Nombre Total de Livres En Stock: %d\n",total);
        }
        else if (choix ==0){
            printf("Thala \n");
        }
        else{
            printf("Choix invalide.\n");
        }


    }while (choix!=0);
    return 0;
}
