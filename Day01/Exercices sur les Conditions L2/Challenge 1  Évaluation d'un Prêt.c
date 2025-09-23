#include <stdio.h>

int main() {
    int rv , sc , Du;
    printf("Veuillez entrez votre Revenu en euros :");
    scanf("%d",&rv);
    printf("Veuillez entrez votre Score de credit:");
    scanf("%d",&sc);
    printf("Veuillez entrez votre Duree :");
    scanf("%d",Du);
    if (rv >=30000 && sc >=700 && Du <=10 ){
        printf("Vous etes Eligible");
    }
     else if(rv >=30000 && sc >=650 && Du <=15 ){
     printf("Vous etes Eligible avec conditions");
    }
     else{
    printf("Vous etes Non eligible");
     }
    return 0;
}
