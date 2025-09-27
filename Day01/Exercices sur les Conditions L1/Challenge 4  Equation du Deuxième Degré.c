#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
     int A ,B ,C,D;
     printf("Entrez la valeur ax :");
     scanf("%d",&A);
     printf("Enrez la valeur de bx :");
     scanf("%d",&B);
     printf("Entrez la valeur de c :");
     scanf("%d",&C);
     if (A!=0){
        D =pow(B,2)-(4*A*C);

        if (D>0){
             int x1=(-B-sqrt(D)/2*A);
             int x2=(-B+sqrt(D)/2*A);
             printf("le solution est :%d ,%d",x1,x2);

        }else if(D=0){
           int x=(-B)/2*A;
           printf("le solution est :%d",x);
       }else{
          printf("l'equation n'admet pas une solution ");
     }
    }else{
     printf("l'equation n'est pas de deuxiem deugre");}

    return 0;


}
