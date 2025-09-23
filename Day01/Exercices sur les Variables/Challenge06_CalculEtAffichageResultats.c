#include <stdio.h>

int main() {
    float A , B;
    printf("Entrez la valeur de A : ");
    scanf("%f",&A);
    printf("Entrez la valeur de B :");
    scanf("%f",&B);
    printf("A + B = %.0f\n",A+B);
    printf("A - B = %.0f\n",A-B);
    printf("A x B = %.0f\n",A*B);
    printf("A / B = %.2f\n",A/B);
return 0;
}