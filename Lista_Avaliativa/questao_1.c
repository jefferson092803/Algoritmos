#include <stdio.h>


int main(){
    
    int ano;
    scanf("%d",&ano);
    if (ano%4==0 && ano!=1916||1940||1944)
    {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d\n",ano);
    }else if (ano%4==2 && ano!=1916||1940||1944)
    {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d\n",ano);
    }else
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d\n",ano);
    }
    
    
    
    return 0;
}