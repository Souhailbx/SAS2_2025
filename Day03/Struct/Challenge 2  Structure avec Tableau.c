// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct persone {
    char Nom[50];
    char Prenom[50];
    int note[10];
};
struct persone A;
int main() {
    int i;
    printf("Entrez le nom :");
    scanf("%s",A.Nom);
    printf("Entrez le prenom :");
    scanf("%s",A.Prenom);
    for(i=0;i<10;i++){
    printf("Entrez les note [%d] :",i+1);
    scanf("%d", &A.note[i]);
    };
    printf("Le Nom est :%s\n",A.Nom);
    printf("Le prenome est :%s\n",A.Prenom);
    for(i=0;i<10;i++){
    printf("La note [%d] est :%d\n",i+1,A.note[i]);
    };
    return 0;
}