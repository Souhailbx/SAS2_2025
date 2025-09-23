#include <stdio.h>
#include <math.h>

int main() {
    float d;
    float x1 , y1 , z1 ;
    float x2 , y2 , z2 ;
    printf("Entrez les coordonnees du 1er point :\n");
    printf("X1 = ");
    scanf("%f",&x1);
    printf("Y1 = ");
    scanf("%f",&y1);
    printf("Z1 = ");
    scanf("%f",&z1);
    printf("Entrez les coordonnees du 2eme point :\n");
    printf("X2 = ");
    scanf("%f",&x2);
    printf("Y2 = ");
    scanf("%f",&y2);
    printf("Z2 = ");
    scanf("%f",&z2);
    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
    printf("Votre Distance est :%f",d);

return 0;
}