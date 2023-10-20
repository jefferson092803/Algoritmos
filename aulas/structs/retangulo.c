#include <stdio.h>
#include <math.h>

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
 
//DISTANCIA ENTRE D0IS PONTOS == (XA - XB)  elevado ao quadrado  +    (YB -YA)elevado ao quadrado;

   float calculaDiagonalRetangulo(struct retangulo r){
      float diagonal = sqrt(pow(r.pontoA.x - r.pontoD.x,2)+ pow(r.pontoA.y - r.pontoD.y,2));    

      return diagonal;
    }



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


   printf("Comprimento da diagonal do retangulo ret : %.4f\n",calculaDiagonalRetangulo(ret));

    return 0;
}