#include <stdio.h>
#include <stdlib.h>

int main(){
    int respostas;

    printf("==Quiz de C - nivel iniciante==\n \n");

    printf("1. Qual dos seguintes, informa uma variavel inteiro:\n\n");
    printf("1) Float\n2) Char\n3) Int\n4) Double\n");
    printf("Sua Respostas: ");
    scanf("%d", &respostas);
    if (respostas == 3)
    {
        printf("CERTA RESPOSTA ^_^\n \n");
    } else{
        printf("RESPOSTA ERRADA '_'\n \n");
    }

    printf("2. Qual simbolo e usado para comentarios de linha unica em C?\n\n");
    printf("1) //\n2) /* */\n3) #\n4) <!-- -->\n");
    printf("Sua Resposta: ");
    scanf("%d", &respostas);
    if (respostas == 1)
    {
        printf("CERTA RESPOSTA ^_^\n \n");
    } else{
        printf("RESPOSTA ERRADA '_'\n \n");
    }

    printf("3. O que esse codigo faz? printf(\"numero: %%d\", 5); \n\n");
    printf("1) num: 5\n2) 5\n3) \"%%d\"\n4) numero: 5\n");
    printf("Sua Resposta: ");
    scanf("%d", &respostas);
    if (respostas == 4)
    {
        printf("CERTA RESPOSTA ^_^\n \n");
    } else{
        printf("RESPOSTA ERRADA '_'\n \n");
    }
    printf("4. o que significa o simbolo * quando usado em uma variavel\n\n");
    printf("1) operador divisao\n2) operador logico\n3) declaracao ponteiro\n4) nenhuma das alernativa\n");
    printf("Sua Resposta: ");
    scanf("%d", &respostas);
    if (respostas == 4)
    {
        printf("CERTA RESPOSTA ^_^\n \n");
    } else{
        printf("RESPOSTA ERRADA '_'\n \n");
    }
    printf("5.o que esse codigo imprimi?\n int a = 5;\n   printf(\"%%d\", ++a);\n\n");
    printf("1) 6\n2) 7\n3) erro\n4) 5\n");
    printf("Sua Resposta: ");
    scanf("%d", &respostas);
    if (respostas == 1)
    {
        printf("CERTA RESPOSTA ^_^\n \n");
    } else{
        printf("RESPOSTA ERRADA '_'\n \n");
    }
    
    
    




}