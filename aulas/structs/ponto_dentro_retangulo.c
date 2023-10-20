#include <stdio.h>

struct ponto
 {
    int x;
    int y;
 };
 
 

 struct retangulo
 {
    struct ponto pontoA;
    struct ponto pontoD;
    
 };


int main(){
   struct retangulo ret;

   printf("Insira o ponto A(canto superior esquerdo) do retangulo:\n");
   printf("coordenada x do ponto A: ");
   scanf("%d",&ret.pontoA.x);
   printf("coordenada y do A: ");
   scanf("%d",&ret.pontoA.y);

   printf("Insira o ponto D(canto inferior direito) do retangulo:\n"); 
   printf("coordenada x do ponto D: ");
   scanf("%d",&ret.pontoD.x);
   printf("coordenada y do ponto D: ");
   scanf("%d",&ret.pontoD.y); 



    
}