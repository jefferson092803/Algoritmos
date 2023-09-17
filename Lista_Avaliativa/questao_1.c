#include <stdio.h>

int main(){
   int ano;
   scanf("%d",&ano);
   
   
   if ((ano - 1896) % 4 ==0 )
   {
     printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d\n",ano);
   }else
   {
     printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d\n",ano);
   }
   if (ano >= 1930 && (ano -1930)% 2 == 0)
   {
    printf("A Copa do Mundo de Futebol ocorreu no ano de %d\n",ano);
   }else
   {
    printf(" “Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d\n",ano);
   }
   
   
    return 0;
}