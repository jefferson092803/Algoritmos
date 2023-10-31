#include <stdio.h>

int main(){
    
    int v[3] = {1,2,3};
    
    printf("endereco de memoria apontado por v: %p\n",v);
    printf("valor apontado por v : %d\n",*v);
    printf("endereco de memoria do seguinte valor de v: %p\n"v + 1);



    return 0;
}