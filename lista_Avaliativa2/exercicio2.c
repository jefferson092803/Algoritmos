#include <stdio.h>
float calculaForcaPonderada(int forcas[]) {
  const int weights[] = {8, 10, 10, 5, 5, 8, 8, 11, 11, 12, 12};
  return (weights[0]*forcas[0]+weights[1]*(forcas[1] + forcas[2])+weights[2]*(forcas[3]+forcas[4])+weights[3]*(forcas[5]+forcas[6])+weights[4]*(forcas[7]+forcas[8])+weights[5]*(forcas[9]+forcas[10]))/ 100.0;
}


int main(){
    char nomeDoTimeA[31];
    char nomeDoTimeB[31];
    char nomeJogador[31];
    char posicao;
    int forcasTimeA[11],forcasTimeB[11];
    int forca;
      
    scanf(" %30[^\n]", nomeDoTimeA);
    for (int i = 0; i < 11; i++)
    {
        scanf(" %30[^;]; %c; %d", nomeJogador,&posicao, &forca);
        int posic = (posicao == 'L') ? (forcasTimeA[1] == 0) ? 1 : 2 : 
        (posicao == 'Z') ? (forcasTimeA[3] == 0) ? 3 : 4 : 
        (posicao == 'V') ? (forcasTimeA[5] == 0) ? 5 : 6 : 
        (posicao == 'M') ? (forcasTimeA[7] == 0) ? 7 : 8 : 
        (posicao == 'A') ? (forcasTimeA[9] == 0) ? 9 : 10 : 0;

        if (forcasTimeA[posic] == 0)
            forcasTimeA[posic] = forca;
    }
    
    scanf(" %30[^\n]", nomeDoTimeB);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", nomeJogador, &posicao, &forca);

        int posi = (posicao == 'L') ? (forcasTimeB[1] == 0) ? 1 : 2 : 
        (posicao == 'Z') ? (forcasTimeB[3] == 0) ? 3 : 4 : 
        (posicao == 'V') ? (forcasTimeB[5] == 0) ? 5 : 6 : 
        (posicao == 'M') ? (forcasTimeB[7] == 0) ? 7 : 8 : 
        (posicao == 'A') ? (forcasTimeB[9] == 0) ? 9 : 10 : 0;

        if (forcasTimeB[posi] == 0)
            forcasTimeB[posi] = forca;
    }
    float forcaTimeA = calculaForcaPonderada(forcasTimeA);
    float forcaTimeB = calculaForcaPonderada(forcasTimeB);
    printf("%s: %.2f de forca\n%s: %.2f de forca\n", nomeDoTimeA, forcaTimeA, nomeDoTimeB, forcaTimeB);


    if (forcaTimeA > forcaTimeB)
        printf("%s eh mais forte\n", nomeDoTimeA);
    else if (forcaTimeB > forcaTimeA)
        printf("%s eh mais forte\n",nomeDoTimeB);
    else
        printf("Os times tem a mesma força\n");

    



    return 0;
}