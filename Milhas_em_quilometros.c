#include<stdio.h>
#include<locale.h>
int main(){
     double m;
     double k;
     setlocale(LC_ALL,"Portuguese_Brazil");

    printf("\n Digite uma dist�ncia em milhas: \t");
    scanf("%lf", &m);

    k = 1.60934 * m;

    printf("\n O valor em quil�metros �: %lf", k);
    printf("\n");

    return(0);

}
