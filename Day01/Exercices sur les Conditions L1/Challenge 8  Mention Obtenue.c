#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int N;
    printf("Entrez la note :");
    scanf("%d",&N);
    if(N <10){
        printf("il est recale");
    }else if(N>=10 && N<12){
        printf("il est passable");
    }else if (N >=12 && N<14){
        printf("il est assez bien");
    }else if(N>=14 && N<16){
        printf("il est bien");
    }else {
        printf("il est tres bien");
    }
    return 0;


}
