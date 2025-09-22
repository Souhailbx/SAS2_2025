#include <stdio.h>

int main() {
    int T ;
    float K;
    printf("Vuillez Entrez la temperature qui vou voullez changer :");
    scanf("%d",&T);
    K = (T + 273.15);
    printf("La temperature en Kelvin est :%.2f",K);
return 0;
}
