#include <stdio.h>

int main(){
    int num = 10;
    int valores[10];
     for (int i = 0; i < num; i++) {
        scanf("%d", &valores[i]);
     }
      for (int i = 0; i < num; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");




    return 0;
}