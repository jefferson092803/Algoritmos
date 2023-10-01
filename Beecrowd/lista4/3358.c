#include <stdio.h>
#include <string.h>

int main(){
   int numEntradas,consoantesConsecutivas = 0;
   char sobrenome[43];
   scanf("%d",&numEntradas);

   for (int i = 0; i < numEntradas; i++)
   {
      fgets(sobrenome,43,stdin);
      for (int posicao = 0; posicao< strlen(sobrenome); i++){ 
        char letra = sobrenome[posicao];
        //checar,letra por letra,se é consoante ou não 
        if (letra !='a'&&letra !='e'&&letra !='i'&&letra !='o'&&letra !='u'&&letra!='A'&&letra !='E'&&letra !='I'&&letra !='O'&&letra !='U')
        {
            consoantesConsecutivas++;
            if (consoantesConsecutivas >= 3)
            {
                printf("%s Nao eh facil\n",sobrenome);
                break;
            }
        }
        else{
            consoantesConsecutivas= 0; // Interrompe a sequência de consoantes
        }
        if (consoantesConsecutivas <= 2)
        {
            printf("%s eh facil\n",sobrenome);
        }
        
      }
      
   }
   




    return 0;
}