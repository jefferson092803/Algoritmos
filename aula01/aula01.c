#include <stdio.h>


int main(){
    int nota1;
    int nota2;
    int nota3;
    int media;
    //%d significa que o numero é decimal
     
    printf("Digite 3 notas:\n");
     
    printf("NOTA 1:");
    scanf("%d",&nota1);
    printf("NOTA 2:");
    scanf("%d",&nota2);
    printf("NOTA 3:");
    scanf("%d",&nota3);
    
    media= (nota1 + nota2 +nota3)/3;
    
    if(media > 9){
        printf("APROVADO!EXCELENTE NOTA\n");
    }
    else if(media < 7){
        printf("REPROVADO\n");
    }
    else{
        printf("APROVADO!");
    }

    printf("media:%d",media);

    return 0;
}