#include <stdio.h>

typedef struct aluno{
    int matricula; //4 bytes
    char nome[20]; // 20 bytes
    float nota1,nota2,nota3; // 3*4 bytes = 12 bytes
} Aluno;




int main(){
   printf("tamanho da struct aluno : %d\n",sizeof(Aluno));
   




    return 0;
}