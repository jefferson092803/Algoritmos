#include <stdio.h>
#include <string.h>

int romanosConstantes(char sigla){
   
   switch (sigla)
   {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
   }
}

int function_RomanoParaDecimal(char *romano){
    int res = 0;
    for (int i = 0; romano[i]; i++) {
        if (romanosConstantes(romano[i]) < romanosConstantes(romano[i + 1])) {
            res-= romanosConstantes(romano[i]);
        } else {
            res+= romanosConstantes(romano[i]);
        }
    }

    return res;
}

void DecimalPara_binario(int decimal,char binario[]){
   int i = 0;
   binario[0]=='\0';
   
   if (decimal == 0) {
        printf("0\n");
        return;
    }
    while (decimal > 0) {
        binario[i] = decimal % 2 ;
        decimal = decimal / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binario[j]);
    }
}

void Decimal_Para_Hexadecimal(int decimal, char hexadecimal[]){
   int i = 0,resto;
   if (decimal == 0) {
        printf("0\n");
        return;
    }
   while (decimal > 0) {
        resto = decimal % 16;
        if (resto < 10) {
            hexadecimal[i] = resto + '0';
        } else {
            hexadecimal[i] = resto - 10 + 'A';
        }

        decimal = decimal / 16;
        i++;
    }
    
}

int main(){
   char num_romano[12],binario[32], hexadecimal[100];
   int decimal;
   scanf("%s",num_romano); 
   decimal = function_RomanoParaDecimal(num_romano);
   DecimalPara_binario(decimal, binario);
   Decimal_Para_Hexadecimal(decimal,hexadecimal);
   printf("%s na base 2: %s\n",num_romano, binario);
   printf("%s na base 10: %d\n",num_romano, decimal);
   printf("%s na base 16: %s\n",num_romano, hexadecimal);
   return 0;
}