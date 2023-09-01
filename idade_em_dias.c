#include <stdio.h>
 
int main() {
    int dias,meses,anos,diasRest;
    scanf("%d",&dias);
    anos=dias / 365;
    diasRest=dias%365;
    meses=(dias%365)/30;
    dias=diasRest%30;
    printf("%d\n ano(s)",anos);
    printf("%d\n mes(es)",meses);
    printf("%d\n dias(s)",diasRest);
    return 0;
}