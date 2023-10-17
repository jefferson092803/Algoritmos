#include <stdio.h>


struct ponto
{
    int X;
    int Y;
};




int main(){
    struct ponto p1;

    scanf("%d",&p1.X);
    scanf("%d",&p1.Y);


    printf("Distancia entre p1(%d ,%d) e (0,0):\n",p1.X,p1.Y);
    printf("%f",sqrt(p1.X*p1.X + p1.Y * p1.Y));






    return 0;
}