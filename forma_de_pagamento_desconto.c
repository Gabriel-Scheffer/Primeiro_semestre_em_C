#include <stdio.h>
#include <math.h>

int  main()
{
    int cliente;
    float compra;
    printf("Qual o valor total da compra:R$");
    scanf("%f", &compra);
    printf("Qual o tipo do cliente?\n 1 = cliente comum (sem desconto)\n 2 = cliente premium (5porc de desconto) \n 3 = colaborador (10porc)\n DIGITE O TIPO:");
    scanf("%d", &cliente);
    if (cliente>=1 && cliente<=3){
        switch(cliente){
            case 1: printf("O total da compra será de R$%2.f",compra);
            break;
            case 2: printf("O total da compra será de R$2.f",compra-compra/100*5);
            break;
            case 3: printf("O total da compra será de R$%2.f",compra-compra/100*10);
        }
    }
    else
    {
        printf("O tipo de cliente digitado foi invalido...");
    }
}



