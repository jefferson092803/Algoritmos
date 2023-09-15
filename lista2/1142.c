#include <stdio.h>

int main(){
   int N,i;
   scanf("%d",&N);
   for ( i = 1; i <= N*4; i+=4)
   {
     printf("%d %d %d",i,i+1,i+2);
     printf(" PUM\n");

   }
    return 0;
}