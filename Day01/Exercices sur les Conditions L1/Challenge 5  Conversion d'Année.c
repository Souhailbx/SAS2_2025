#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
     int A ;
     int M=0;
     int J=0;
     int H=0;
     int MNT=0;
     int S=0;
     printf("Entrez le nombre d'annee :");
     scanf("%d",&A);
     int choix;
     int R=0;
       printf("\n===>Entrez votre choix<===\n");
       printf("1:Mois\n");
       printf("2:Jours\n");
       printf("3:Heures\n");
       printf("4:Minutes\n");
       printf("5:Secondes\n");
       printf("Votre choix:");
       scanf("%d",&choix);
     switch (choix){
    case 1:
        M = A*12;
        printf("Votre choix en mois est :%d mois",M);
        break ;
    case 2:
        J =A*365;
        printf("Vore choix en jour est :%d jour",J);
        break;
    case 3:
        H =A*365*24;
        printf("Votre choix en Heures est :%d heur",H);
        break;
    case 4:
        M =A*365*24*60;
        printf("Votre choix en Minutes est :%d min",M);
        break;
    case 5:
        S =A*365*24*60*60;
        printf("Votre choix en secondes est :%d s",S);
        break;
    default:
     printf("Votre choix invalid");
     }

    return 0;


}
