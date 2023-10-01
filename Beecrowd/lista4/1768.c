#include <stdio.h>

int main(){
    
    int tamanhoArvore;
    scanf("%d",&tamanhoArvore);
    for (int  i = 0; i < tamanhoArvore; i++)
    {
        printf("*");
    }
    printf("\n");
    int meioArvore= tamanhoArvore/2;
    //linha de cima da base("tronco da árvore")

    for (int i = 0; i < meioArvore; i++)
    {
        printf(" ");
    }
    
    printf("*\n");

    //linha de baixo da base
    
    for (int i = 0; i < meioArvore - 1; i++)
    {
        printf(" ");
    }
    printf("***\n");
    
    return 0;
}