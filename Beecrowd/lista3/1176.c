#include <stdio.h>

int main(){
    int vetor[60];
    long long int T;
    scanf("%lld",&T);
    vetor[0] = 0;
    vetor[1]=1;
    for (int posicao = 2; (posicao < 60) && (posicao < T); posicao++)
    {
        scanf("%d",vetor[posicao]);
    }
    




    return 0;
}