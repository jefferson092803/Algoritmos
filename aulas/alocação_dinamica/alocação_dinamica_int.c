#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//vetor de inteiros com alocação estática vs dinâmica

int main(){
   int vetor_estatico[5];
   for (int i = 0; i < 5; i++)
   {
     scanf("%d",&vetor_estatico[i]);
     printf("vetor_estatico[%d] = %d\n",i,vetor_estatico[i]);
   }
   
   //alocação dinâmica de um vetor de ints
   
   int *vetor_dinamico; 
   vetor_dinamico = (int*) malloc(5* sizeof(int)); //5 x tamanho de cada inteiro (4 bytes)
   
    return 0;
}