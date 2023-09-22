#include <stdio.h>

int main(){
    int mes;
    scanf("%d",&mes);
    switch (mes){
        case 1:
          printf("January\n");
        break;
        case 2:
          printf("February\n"); 
        break;
        case 3:
          printf("March\n");
        break;
        case 4:
          printf("May\n");
        break;
        case 5:
          printf("June\n");
        break;
        case 6:
          printf("July\n");
        break;
        case 7:
          printf("August\n");
        break;
        case 8:
          printf("September\n");
        break;
        case 9:
          printf("October\n");
        break;
        default:
         printf("INVALIDO");
         return 0;
    }
}