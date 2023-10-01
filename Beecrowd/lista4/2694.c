#include <stdio.h>
#include <ctype.h>

int main(){
   int N;
   scanf("%d",&N);
   int soma = 0;
   for (int i = 0; i < N; i++)
   {
      char string[15];
      scanf("%s",string);
      for (int i = 0; i < 15; i++)
      {
         if (isalpha(string[i]))
         { 
             
         }
         
         else (isalnum(string[i]))
         {
            soma += string[i];
         }
         
         printf("%d\n", soma);
      }
   }


    return 0;
}