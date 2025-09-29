#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Contact{
     char Nom [50];
     char tele [15];
     char adrs [30];

};
    struct Contact A[MAX];
    int nb_cnt = 0;
 void Menu(){
     printf("\n=====>Gestion De Contacts<=====\n");
     printf("1:Ajouter Un Contact\n");
     printf("2:Modifier Un contact\n");
     printf("3:Supprimer Un Contact\n");
     printf("4:Afficher Tous Les Contact\n");
     printf("5:Rechercher Un contact\n");
     printf("0:Exit\n");
     printf("===========================\n");

 };
 void Ajouter(){
     printf("Entrez Le Nom :");
     scanf(" %[^\n]",A[nb_cnt].Nom);
     printf("Entrez Le Numero De Telephone :");
     scanf(" %[^\n]",A[nb_cnt].tele);
     printf("Entrez L'adresse E-Mail :");
     scanf(" %[^\n]",A[nb_cnt].adrs);
    printf("Votre Contact Ajouter Avec Success");
    nb_cnt++;
 }
 void Modifier(){
  if (nb_cnt == 0){
    printf("Il Y\'a Aucune Contact");
  }else{
  char s_nom[50];
  printf("Entrez Le Nom Du Contact Qui Veut Modifier:");
  scanf(" %[^\n]",s_nom);
  int  trouve =0;
  for (int i=0;i<nb_cnt;i++){
        if(strcmp(A[i].Nom,s_nom)==0)
        {
            printf("Entrez Le Nouveau Numero:");
            scanf(" %[^\n]",A[i].tele);
            printf("Entrez Le Nouveau Adresse E-Mail:");
            scanf(" %[^\n]",A[i].adrs);
            trouve=1;
        }printf("Votre Modufication ete avec succes ");
      }if (!trouve)printf("Contact non trouve\n");
    }
   }
 void Supprimer(){

     if (nb_cnt==0){
        printf("Il Y\'a Aucune Contact");
     }else{
     int f = 0;
     char s_supr[50];
     printf("Entrez Le Nom Du Contact Qui Veut Supprimer :");
     scanf(" %[^\n]",s_supr);
     for(int i=0;i<nb_cnt;i++){
        if (strcmp(A[i].Nom,s_supr)==0){
             for(int J=i;J<nb_cnt-1;i++){
                A[J]=A[J+1];
             }nb_cnt--;
             f = 1;
             printf("La Suppression est Succes\n");
             break;
          }
        }
        if (!f)
        {
            printf("Le Contact n'est pas trouver");
        }
       }
 }
 void Afficher(){
    if (nb_cnt==0){
        printf("Il Y\'a Aucune Contact");
    }else {
        printf("\n====>Liste De Contact est<====\n");
        for(int i=0;i<nb_cnt;i++){
            printf("*************************************\n");
            printf("Le Nom Du Contact est :%s\n",A[i].Nom);
            printf("**************************************\n");
            printf("Le Numero De Telephone est :%s\n",A[i].tele);
            printf("**************************************\n");
            printf("L\'adresse E-mail est :%s\n",A[i].adrs);
            printf("**************************************\n");
        }
    }
 }
 void Rechercher(){
   if (nb_cnt==0){
        printf("Il Y\'a Aucune Contact");
 }else{
     char rch[50];
   printf("Entrez Le Contact Qui a Rechercher :");
   scanf(" %[^\n]",rch);
   int trouve =0;
   for (int i=0;i<nb_cnt;i++){
    if (strcmp(A[i].Nom,rch)==0){
        printf("Le Nom est :%s\n",A[i].Nom);
        printf("Le Numero est :%s\n",A[i].tele);
        printf("l'adresse est :%s\n",A[i].adrs);
        trouve=1;
    }
   }if (!trouve)printf("Contact non trouve\n");
 }
 }
int main() {
    while (1) {
        Menu();
        int choix;

        printf("Entrez votre Choix : ");
        if (scanf("%d", &choix) != 1) {
            printf("Choix invalide\n");
            while(getchar() != '\n');
            continue;
        }

        switch (choix) {
            case 1: Ajouter(); break;
            case 2: Modifier(); break;
            case 3: Supprimer(); break;
            case 4: Afficher(); break;
            case 5: Rechercher(); break;
            case 0: exit(0);
            default: printf("Choix invalide\n");
        }
    }
}
