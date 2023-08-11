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

    if(media < 7){
        printf("reprovado\n");

    }
    else if(media >= 8){
       printf("parabens!bonus de 1 ponto!");
       media ++;
       printf("Aprovado!Excelente nota\n");
       if(media > 10){
          media --;
       }
    }
    else{
        printf("APROVADO!\n");
    }

    printf("media:%d\n",media);
    return 0;
}