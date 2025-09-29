
#include <stdio.h>
#include <string.h>

struct persone {
    char Nom[50];
    char Prenom[50];
    int age;
};
struct persone A;
int main() {
    printf("Entrez le nom :");
    scanf("%s",A.Nom);
    printf("Entrez le prenom :");
    scanf("%s",A.Prenom);
    printf("Entrez l'age :");
    scanf("%d", &A.age);
    
    printf("Le Nom est :%s\n",A.Nom);
    printf("Le prenome est :%s\n",A.Prenom);
    printf("L'age est :%d\n",A.age);
    return 0;
}