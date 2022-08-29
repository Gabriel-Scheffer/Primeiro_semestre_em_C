#include <stdio.h>
#include <math.h>
main()
{
    int pagamento;
    float compra;
    printf("Digite o valor total da compra:R$");
    scanf("%f", &compra);
    printf("FORMA DE PAGAMENTO\n 1 = À VISTA \n 2 = À PRAZO \n Digite:");
    scanf("%d", &pagamento);
    if (pagamento>=1 && pagamento<=2){
        switch(pagamento){
            case 1:printf("O valor total da compra sera de R$%.2f",compra-compra/100*10);
            break;
            case 2:printf("O valor total da compra sera de R$%.2f",compra);
            break;
        }
	}
    else{
        printf("O TIPO DE PAGAMENTO DIGITADO FOI INVALIDO");
    }    
}
