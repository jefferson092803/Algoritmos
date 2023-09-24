#include <stdio.h>

int main(){

   float vetor[100]; 
   for (int posicao = 0; posicao < 100; posicao++)
   {
     scanf("%f",&vetor[posicao]);
     if (vetor[posicao] <= 10)
     {
        printf("A[%d] = %.1f\n",posicao ,vetor[posicao]);
     }
     
   }
   
    return 0;
}