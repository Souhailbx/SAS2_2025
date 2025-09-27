#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
      int N ,A,B ,C,D;
      printf("Entrez un nombre :");
      scanf ("%d",&N);
      A =N%2;
      B =(N/2)%2;
      C =(N/4)%2;
      D =(N/8)%2;
      printf("le nombre en binaire est :%d%d%d%d",D,C,B,A);


    return 0;


}
