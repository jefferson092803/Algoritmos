#include <stdio.h>

int main(){
    // 1ª forma de inicializar o vetor:
    // int vetor[4]={1,2,3,4};
 
    // 2ª forma de inicializar o vetor:
     //int vetor[4];
     //vetor[0]= 1;
     //vetor[1]= 2;
     //vetor[2]= 3;
     //vetor[3]= 4;
     //vetor[4]= 5;
     //printf("%d",vetor[1]);
    
    // 3ª forma de inicializar o vetor:
    int vetor[4];
    for (int i = 0; i <= 3; i++)
    {
        scanf("%d",&vetor[i]);
    }
    

    return 0;
}