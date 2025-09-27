#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;
    printf("Veuillez entrez un caractere :");
    scanf("%c",&C);
    if(C >=65 && C<=90){
        printf("%c :il est majuscule",C);
    }else if (C >=97 && C<=122){
    printf("%c :il est miniscule",C);
    }
    return 0;
}
