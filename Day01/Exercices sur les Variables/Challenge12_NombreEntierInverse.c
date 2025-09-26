#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
      int N ,A ,B ,C ,D;
      printf("Entrez le nombre:");
      scanf("%d",&N);
        A = N%10;
        B = (N/10)%10;
        C = (N/100)%10;
        D = (N/1000)%10;
      printf("Le nombre a l'inverse est :%d",A*1000+B*100+C*10+D);

    return 0;


}
