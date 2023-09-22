#include <stdio.h>
 
int main() {
    int dias,meses,anos,D;
    scanf("%d",&dias);
    anos=dias / 365;
    meses=(dias%365)/30;
    D=(dias%365)%30;
    printf("%d ano(s)\n %d mes(es)\n %d dia(s)",anos,meses,D);
    return 0;
}