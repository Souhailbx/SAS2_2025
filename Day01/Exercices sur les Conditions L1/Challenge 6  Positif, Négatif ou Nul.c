#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
     int N;
     printf("Entrer un nombre :");
     scanf("%d",&N);
     if (N<0){
        printf("Cette nombre est negatif ");
     }else if (N>0){
     printf("Cette nombre est positif");
     }else {
     printf("Cette nombre est nul");
     }
    return 0;


}
