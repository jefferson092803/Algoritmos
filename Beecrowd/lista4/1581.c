#include <stdio.h>
#include <string.h>

int main(){
   int numero_de_testes,numIdiomas;
   scanf("%d",&numero_de_testes);


   for (int i = 0; i < numero_de_testes; i++)
   {
      scanf("%d",&numIdiomas);
      char idiomas[numIdiomas][21];

      for (int k = 0; k < numIdiomas; k++)
      {
         scanf("%s",idiomas[k]);
      }
       
      char PrimeiroIdioma[21];
      char idiomaFalado[21]; 
      strcpy(PrimeiroIdioma,idiomas[0]);
      strcpy(idiomaFalado,PrimeiroIdioma);
      printf("Primeiro idioma: %s\n",idiomaFalado);

      for (int k = 1; k < numIdiomas; k++)
      {
         if (strcmp(PrimeiroIdioma,idiomas[k]) != 0)
         {
            strcpy(idiomaFalado,"ingles");
            break;
         }
         
      }
      
      printf("%s\n",idiomaFalado);
   }
   



    return 0;
}