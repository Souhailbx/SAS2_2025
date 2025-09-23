#include <stdio.h>
#include <math.h>

int main() {
    float r , v;
    printf("Veuillez entrez le rayon de la sphere :");
    scanf("%f",&r);
    v = (4 / 3)*3.14 * pow(r,3);
    printf("Votre Volune est :%.2f",v);

return 0;
}