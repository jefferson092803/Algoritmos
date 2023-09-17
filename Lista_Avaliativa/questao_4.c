#include <stdio.h>

int main(){
   float salario;
   char nivelFuncionario;
   float porcentagem;

   printf("Digite o nivel do funcionario:\n");
   scanf("%c",&nivelFuncionario);
   printf("Digite o salario do funcionario\n");
   scanf("%f",&salario);
   switch (nivelFuncionario)
   {
   case 'a':
      porcentagem =+ salario * 0.05;
      printf("R$ %.2f",salario + porcentagem);
    break;
   case 'b':
      porcentagem=+ salario *0.05;
      printf("R$ %.2f",salario + porcentagem);
   case 'c':
      porcentagem =+ salario * 0.08;
      printf("R$ %.2f",salario + porcentagem);
    break;
   default:
      printf("Nivel inexistente");
    break;
   }
   
    return 0;
}