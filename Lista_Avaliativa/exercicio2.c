#include <stdio.h>

int main(){
   int soma= 0;
   int numeroOriginal,numero;
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
   numeroOriginal = numero;
   while (numero != 0)
   {
    soma += numero % 10;
    numero /= 10;
   }
   
   printf("A soma dos algarismos de %d eh %d.\n",numeroOriginal,soma);
    return 0;
}