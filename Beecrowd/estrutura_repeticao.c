#include <stdio.h>

int main(){
    
    int nota;
    int i = 0;
    do
    {
         printf("Insira uma nota positiva:\n");
        scanf("%d",&nota);
    } while (nota < 0);
        printf("Insira uma nota positiva:\n");
        scanf("%d",&nota);

    return 0;
}
