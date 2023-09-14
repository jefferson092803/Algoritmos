#include <stdio.h>

int main(){
   int numero;
   printf("Digite um numero inteiro positivo: \n");
   scanf("%d",&numero);
   if (numero % 2 == 0)
   {
     printf("%d",numero);
     printf(" eh par\n");
   }
   else
   {
    printf("%d",numero);
    printf(" eh impar\n");
   }


    return 0;
}