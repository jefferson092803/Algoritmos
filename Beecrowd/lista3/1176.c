#include <stdio.h>

int main(){
    unsigned long long int fibo[60];
    fibo[0]= 0;
    fibo[1]= 1; 
    for (int i = 2; i < 61; i++)
    {
        fibo[i]=fibo[i-1]+ fibo[i-2];
    }
      
    int numeroTestes,posFibo;
    scanf("%d",&numeroTestes);

    for (int i = 0; i < numeroTestes; i++)
    {
        scanf("%d",&posFibo);
        printf("Fib(%d) = %lld\n",numeroTestes,fibo[i]);
    }
    


    return 0;
}