#include <stdio.h>
#include <string.h>






int main(){
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];
    char operacao[5];
    
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
         scanf("%d",&matrizA[i][j]);
      }
    }
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
         scanf("%d",&matrizB[i][j]);
      }
    }

    scanf("%s",&operacao[5]);

    if (strcmp(operacao,"soma")==0)
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
     }
    else if (strcmp(operacao,"sub")==0)
    {
       for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            }
       }
    }
    else if (strcmp(operacao,"mult")==0)
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado[i][j] = matrizA[i][j] * matrizB[i][j];
            }
        }
    }
    
    
    
    
    return 0;
}