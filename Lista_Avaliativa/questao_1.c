#include <stdio.h>


int main(){
    
    int ano;    
    scanf("%d",&ano);
     if((ano >= 1896 && ano <= 2020) && (ano % 4 == 0))
    {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d\n",ano);
    } 
    else if (ano >= 1930 && (ano % 4 == 2))
    {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d\n",ano);
    }
    else
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d\n",ano);
    }
    
    return 0;
}