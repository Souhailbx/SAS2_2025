#include <stdio.h>
#include <stdlib.h>

int main()
{
   int D,M,A;
   printf("Entrez la date :\n");
   printf("l'annee :");
   scanf("%d",&A);
   printf("Mois :");
   scanf("%d",&M);
   printf("Jour :");
   scanf("%d",&D);
   printf("La date qui entrez est :%d /%d /%d\n",D,M,A);
   switch (M){
      case 1:
       printf("%d-janvier-%d",D,A);
          break;
       case 2:
       printf("%d-fevrier-%d",D,A);
          break;
       case 3:
           printf("%d-Mars-%d",D,A);
           break;
       case 4:
        printf("%d-Avril-%d",D,A);
           break;
       case 5:
        printf("%d-Mai-%d",D,A);
           break;
       case 6:
        printf("%d-Juin-%d",D,A);
           break;
       case 7:
        printf("%d-Juille-%d",D,A);
           break;
       case 8:
        printf("%d-Aout-%d",D,A);
           break;
       case 9:
        printf("%d-Septembre-%d",D,A);
           break;
       case 10:
        printf("%d-Octobre-%d",D,A);
           break;
       case 11:
        printf("%d-Novembre-%d",D,A);
           break;
       case 12:
        printf("%d-Decembre-%d",D,A);
        break;
        default:printf("Le mois que tu entrez n'exist pas");
   }

    return 0;
}
