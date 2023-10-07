#include <stdio.h>


int removeZeros(int num){
    int resultado = 0;
    int multiplicador = 1;
    while (num > 0)
    {
        int digito= num%10;
        if (digito != 0)
        {
            resultado += digito*multiplicador;
            multiplicador*=10;
        }
        num/=10;
    }
    return resultado;
}




int main(){
   int num1, num2;
   
    while (1) {
        scanf("%d %d",&num1,&num2);

         if (num1 == 0 && num2 == 0) {
            break;
        }
        
        int soma= num1 + num2;
        
        int resultado=removeZeros(soma);
          
        printf("%d\n", resultado);
    }
    

    return 0;
}