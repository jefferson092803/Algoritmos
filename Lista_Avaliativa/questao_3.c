#include <stdio.h>

int main(){
    int senhaNova;
    int senhaCadastrada;
    scanf("%d", &senhaCadastrada);
    
    while(1){
        scanf("%d", &senhaNova);

        if(senhaNova == senhaCadastrada){
            printf("senha valida!\n");
            break;
        } 
        
        printf("senha invalida!\n");
        
    }
    printf("senha cadastrada = %d\n",senhaCadastrada);
    return 0;
}