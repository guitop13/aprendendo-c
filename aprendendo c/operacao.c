#include <stdio.h>
#include <stdlib.h>

int main(){
    float num[2];
  
        for ( int i = 0; i < 2; i++)
        {
            printf("digite seu numero %d \n", i+1);
            scanf("%f", &num[i]);
        }
    float sub = num[0] - num[1];
    float sum = num[0] + num[1];
    float div = num[0] / num[1];
    float mult = num[0] * num[1];

    printf("subtracao = %.0f\n", sub);
    printf("soma = %.0f\n", sum);
    printf("divisao = %.1f\n", div);
    printf("multiplicacao = %.0f\n", mult);

    return 0;
        

}
