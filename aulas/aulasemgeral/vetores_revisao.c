#include <stdio.h>

int main(){
   //primeira forma
   //só funciona se for na declaração

   //int vetor[5]={1,2,3,4,5};
   //int soma = 0;
      
   // segunda forma   
   //vetor[0] = 1;
   //vetor[1] = 2;
   //vetor[2] = 3;
   //vetor[3] = 4;
   //vetor[4] = 5;
   //vetor[5] = 6;

 //terceira forma

   int vetor[100];

   for (int i = 0; i < 99; i++)
   {
     vetor[i] = i + 1;
     printf("vetor[%d] = %d\n",i,vetor[i]);
   }
   
    return 0;

}