#include <stdio.h>
#include <string.h>

int main(){
    //primeira forma de inicializar
    char string1[10]={'a','b','c','\0'};
    //Se não houver o \0,pode ser que na memória exista valores salvos
    //nas outras posições: ['a','b','c','d',.....]
    
    //segunda forma de inicializar

    char string2[10]="def";
    
    //terceira forma de inicializar,lendo do terminal com gets
    //Não recomendada!Tem problemas por não ter um limite no tamanho da entrada lida
    char string3[10];
    printf("Insira uma string para ser lida pelo gets :");
    gets(string3);

    //quarta forma de inicializar,lendo com fgets
    //permite passar tamanho máximo da entrada
    //evita problemas com o buffer
    

    char string4[10];
    printf("Insira uma string para ser lida pelo 'fgets' :");
    fgets(string4,20,stdin);

    printf("string1(inicializada passando uma lista de chars): %s\n",string1);
    printf("string2(inicializada passando uma string literal): %s\n",string2);
    printf("string3(inicializada com gets): %s\n",string3);
    printf("====== depois do printf da gets\n");
    

    printf("Imprimindo string com fputs :\n");
    fputs(string4,stdout);
    printf("======= depois do printf da fgets\n");

    //funções para manipular strings


    //tamanho de uma string
    printf("Tamanho da string4 : %d\n",strlen(string4));


     //copiar uma string para outra
     char string5[30];
     
     strcpy(string5,string2);
     printf("string 5 copiando a string 2: %s\n",string5);

     //concatenar string

     strcat(string1,string2);
     printf("Concatenando a string1 e string 2: %s\n",string1);

     // comparar strings

     char s1[10]='abc';
     char s2[10]='abcd';
      
    if (strcmp(s1,s2)==0)
    {
        
    }
    
    return 0;
}