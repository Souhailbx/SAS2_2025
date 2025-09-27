#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
     int A ,B ,M;
     printf("Entre le premier nombre :");
     scanf("%d",&A);
     printf("Entre le deuxiem nombre :");
     scanf("%d",&B);
     M = A +B;
     if (A==B){
        M*=3;
     }else {
     M=M;
     }
printf("la somme est :%d",M);

    return 0;


}
