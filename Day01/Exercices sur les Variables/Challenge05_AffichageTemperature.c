int main() {
    int T;
    printf("Veuillez entrez la temperature en celsius :");
    scanf("%d",&T);
    if (T<0){
        printf("L'etat de l'eau est Solide");
    }
    else if (T >=0 && T<100){
        printf("L'etat de l'eau est Liquide");
    }
    else
    printf("L'etat de l'eau GAZ");
return 0;
}