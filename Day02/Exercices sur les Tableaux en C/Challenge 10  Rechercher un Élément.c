#include <stdio.h>
#include <stdlib.h>
int main()
{
     int T[10];
     int i ,n, x;

    printf("Veuillez entrez l'element du tablaux :\n");
     for (i=0;i<10;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);

     }
     printf("Entrez l'element que tu vas trouver :");
     scanf("%d",&n);
     x = 0 ;
     for (i=0;i<10;i++){
       if (T[i]==n)
        x++;
         }
       if (x==0)
        printf("%d ne se trouve pas dans le tablaux ",n);
       else
        printf("%d se trouve dans le tablau");

    return 0;
}
