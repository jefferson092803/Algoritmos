#include <stdio.h>
#include <string.h>



void decimal_para_binario(int decimal, char binario[]) {
   binario[0] = '\0';

   while (decimal > 0) {
        char digito[2];
        sprintf(digito, "%d", decimal % 2);
        strcat(binario, digito);
        decimal = decimal / 2;
    }

    int tamanho = strlen(binario);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = binario[i];
        binario[i] = binario[tamanho - 1 - i];
        binario[tamanho - 1 - i] = temp;
    }
}

void decimal_para_hexadecimal(int decimal, char hexadecimal[]){
    hexadecimal[0] = '\0';

    while (decimal > 0) {
        int resto = decimal % 16;
        char digito[2];
        if (resto < 10) {
            sprintf(digito, "%d", resto);
        } else {
            sprintf(digito, "%c", resto - 10 + 'a');
        }
        strcat(hexadecimal, digito);
        decimal = decimal / 16;
    }

    int tamanho = strlen(hexadecimal);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[tamanho - 1 - i];
        hexadecimal[tamanho - 1 - i] = temp;
    }


}


int main() {
    char numero_romano[20], binario[32], hexadecimal[100];
    int decimal; 
    
    scanf("%s", numero_romano);
    
    decimal = romano_para_decimal(numero_romano);
    decimal_para_binario(decimal, binario);
    decimal_para_hexadecimal(decimal, hexadecimal);

    printf("%s na base 2: %s\n", numero_romano, binario);
    printf("%s na base 10: %d\n", numero_romano, decimal);
    printf("%s na base 16: %s\n", numero_romano, hexadecimal);

    return 0;
}