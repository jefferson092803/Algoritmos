#include <stdio.h>
<<<<<<< HEAD

int main(){
 
=======
#include <stdlib.h>

int main(){
>>>>>>> 894d9c0df837243574e5e1db201c715463426f0f
    int numLinhas;
    scanf("%d", &numLinhas);
    char textoLinha[15];
    
    for(int i = 0;i < numLinhas;i++){
        scanf("%s", textoLinha);
        char valor1[3] = {textoLinha[2], textoLinha[3], '\0'};
        char valor2[4] = {textoLinha[5], textoLinha[6], textoLinha[7], '\0'};
        char valor3[3] = {textoLinha[11], textoLinha[12], '\0'};
        printf("%d\n", atoi(valor1) + atoi(valor2) + atoi(valor3));
    }
<<<<<<< HEAD
 
=======

>>>>>>> 894d9c0df837243574e5e1db201c715463426f0f
    return 0;
}