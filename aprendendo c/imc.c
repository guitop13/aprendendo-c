#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura, imc;
    printf("VAMOS VER SE SEU CORPO ESTA SAUDAVEL?...\n");
    printf("digite seu peso\n");
    scanf("%f", &peso);

    printf("digite sua altura\n");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if (imc < 20 )
    {
        printf("Abaixo do peso");
    }else if (imc >=20 && imc <=24.9)
    {
        printf("Peso Normal");
    }
    else if (imc >=25 && imc <=29.9)
    {
        printf("Sobrepeso");
    }
    else if (imc >=30 && imc <=34.9)
    {
        printf("Obesidade");
    }
    else{
        printf("Obesidade GRAVE");
    }
    return 0;
    
        
}