#include <stdio.h>

int main(){

    int valores[10];
     for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
     }
      for (int i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");




    return 0;
}