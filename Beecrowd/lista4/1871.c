#include <stdio.h>

int main(){
   int num1, num2, soma=0, resultado=0;
   int posicao=1;
   scanf("%d %d",&num1,&num2);

   soma = num1 + num2;
    while (soma > 0) {
        int digito = soma % 10;
        if (digito != 0) {
            resultado += digito * posicao;
            posicao *= 10;
        }
        soma /= 10;
    }
   printf("%d\n", resultado);
   
    return 0;
}