#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char *placa){  
   if (strlen(placa)==8){
      for (int i = 0; i < 3; i++){
        if (!isalpha(placa[i])){
            return 0;
        }
      }
      if (placa[3] != '-' || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6]) || !isdigit(placa[7])){
        return 0;
      } 
   }
   else if (strlen(placa)==7){
      for (int i = 0; i <3; i++){
         if (!isalpha(placa[i])){
           return 0;
         }
      }
      if (!isalpha(placa[3]) || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6])){
        return 0;
      }
   }
   else{
      return 0;
   }
   return 1;
}

int validacaoDiaSemana(char * dia){
   char *diasValidos[] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
   for (int i = 0; i < 7; i++){
     if (strcmp(dia, diasValidos[i]) == 0){
        return 1;
     }
   }
   return 0;
}

int main(){
   char placa[10];
   char diaDaSemana[20];
   int marca = 0;
   scanf("%s",placa);
   scanf("%s",diaDaSemana); 
   if (!validarPlaca(placa)) {
        printf("Placa invalida\n"); 
        marca++;
    }
   if (!validacaoDiaSemana(diaDaSemana)) {
        printf("Dia da semana invalido\n");
        marca++;
    }
    if(marca>0){
     return 0;
    }
    
    int ultimoDigito = placa[strlen(placa) -  1];

    if(strcmp(diaDaSemana,"SEGUNDA-FEIRA")==0 && (ultimoDigito==0||ultimoDigito==1 )){
          printf("%s nao pode circular %s",placa,diaDaSemana);
    }
    else if(strcmp(diaDaSemana,"TERCA-FEIRA")==0 && (ultimoDigito==2||ultimoDigito==3)){
          printf("%s nao pode circular %s",placa,diaDaSemana);
    }
     else if(strcmp(diaDaSemana,"QUARTA-FEIRA")==0 && (ultimoDigito==4||ultimoDigito==5)){
          printf("%s nao pode circular %s",placa,diaDaSemana);
     }
     else if(strcmp(diaDaSemana,"QUINTA-FEIRA")==0 && (ultimoDigito==6||ultimoDigito==7)){
          printf("%s nao pode circular %s",placa,diaDaSemana);
     }
     else if(strcmp(diaDaSemana,"SEXTA-FEIRA")==0 && (ultimoDigito==8||ultimoDigito==9)){
          printf("%s nao pode circular %s",placa,diaDaSemana);
     }
     else if(strcmp(diaDaSemana,"SABADO")==0 || strcmp(diaDaSemana,"DOMINGO")==0){
      printf("Nao ha proibicao no fim de semana\n");
     }
     else{
      printf("%s pode circular %s\n", placa, diaDaSemana);
     }

    return 0;
}