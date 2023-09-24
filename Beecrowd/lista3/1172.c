#include <stdio.h>

int main(){
   int vetor[10];
   for (int posicao = 0; posicao < 10; posicao++)
   { 
      scanf("%d\n",&vetor[posicao]);
      if ((vetor[posicao]==0) || (vetor[posicao]<0))
      {
          vetor[posicao]= 1;
      }
      printf("X[%d] = %d\n",posicao,vetor[posicao]);
   }
    return 0;
} 