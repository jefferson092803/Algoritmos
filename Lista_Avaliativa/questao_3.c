#include <stdio.h>

int main(){
    int senhaNova,senhaCadastrada;

    scanf("%d", &senhaCadastrada);
    
    while(1){
        scanf("%d", &senhaNova);

        if(senhaNova == senhaCadastrada){
            printf("senha valida!\n");
            break;
        } else
        {
            printf("senha invalida!\n");
        }
        
        
    }
    printf("senha cadastrada = %d\n",senhaCadastrada);
    return 0;
}