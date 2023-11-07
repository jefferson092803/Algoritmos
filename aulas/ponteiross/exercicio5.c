#include <stdio.h>


int main(){
   int vetor[5];

   for (int i = 0; i < 5; i++)
   {
      scanf("%d",vetor + i);
      printf("%d\n",vetor[i]);
   }
   


    return 0;
}