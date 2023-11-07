#include <stdio.h>

int main(){
   
   float array[10]= {1,2,3,4,5,6,7,8,9,10};
    
   for (int i = 0; i < 10; i++)
   {
     printf("vetor[%d]  = %f\n",i,array[i]);
     printf("endereco do vetor [%d] = %p\n",i,&array[i]);
   }
   



    return 0;
}