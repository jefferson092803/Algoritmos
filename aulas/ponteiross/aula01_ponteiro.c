#include <stdio.h>

int main(){
    int c = 5;
    int *p,*p1;
    
    p = &c; //armazena endereço de memoria de c em p
    
    printf("Valor de c: %d\n",c);
    printf("endereco de memoria de c: %p\n",&c);
    printf("Valor de p: %p\n",p);
    printf("valor da variavel c a partir de p:%d\n",*p);
    *p= 10;   //c = 10;
    printf("alterando valor de c pelo ponteiro p...\n");
    printf("valor de c: %d\n",c);
   
    p1 = p;
    printf("valor de p1 : %p\n",p1);
    printf("valor da variavel c a partir de p1 :%d\n",*p1);

    return 0;
}