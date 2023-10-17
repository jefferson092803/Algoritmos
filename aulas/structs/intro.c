#include <stdio.h>


struct endereco
{
    char rua[50];
    char cidade[50];
    int numero;
};



struct aluno{
    
    char nome[50];
    int matricula;
    float nota1,nota2,nota3;
    struct endereco endereco;

};



int main(){
    struct aluno aluno1;     //declarando variável do "tipo" struct aluno
    printf("Insira dados do aluno: \n");
    printf("nome :");
    fgets(aluno1.nome,50,stdin);

    printf("matricula: ");
    scanf("%d",&aluno1.matricula);


    printf("notas : ");
    scanf("%f %f %f",&aluno1.nota1,&aluno1.nota2,&aluno1.nota3);


    printf("Informacoes do aluno:\n");
    printf("nome: %smatricula: %d\nnotas: %f %f %f\n",aluno1.nome,aluno1.matricula,aluno1.nota1,aluno1.nota2,aluno1.nota3);




    return 0;
}