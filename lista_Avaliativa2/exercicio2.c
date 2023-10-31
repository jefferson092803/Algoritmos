#include <stdio.h>
#include <string.h>

int main(){
    char nomeDoTimeA[31];
    char nomeDoTimeB[31];
    char nomeJogador[31];
    char posicao;
    int forca, G1 = 0, G2 = 0, L1 = 0, L2 = 0, Z1 = 0, Z2 = 0, V1 = 0, V2 = 0, M1 = 0, M2 = 0, A1 = 0, A2 = 0;
    
    fgets(nomeDoTimeA,31,stdin);
    for (int i = 0; i < 11; i++)
    {
        fgets(nomeJogador,31,stdin);
         char * token = strtok(nomeJogador,";");
         token = strtok(NULL, ";");
         printf("%s\n",token);
         token = strtok(NULL, ";");
         printf("%s\n",token);
        if (strcmp(posicao,"G")==0) {
            G1 = forca;
        } else if (strcmp(posicao,"L")== 0) {
            L1 += forca;
        } else if (strcmp(posicao,"Z")== 0) {
            Z1 += forca;
        } else if (strcmp(posicao,"V")== 0) {
            V1 += forca;
        } else if (strcmp(posicao,"M")== 0) {
            M1 += forca;
        } else if (strcmp(posicao,"A")== 0) {
            A1 += forca;
        }
    }
    float forca_time1 = (8 * G1 + 10 * (L1 + L2) + 5 * (Z1 + Z2) + 8 * (V1 + V2) + 11 * (M1 + M2) + 12 * (A1 + A2)) / 100.0;
    fgets(nomeDoTimeB,31,stdin);
    
    printf("%s: %.2f de forca",nomeDoTimeA,forca_time1);
    



    return 0;
}