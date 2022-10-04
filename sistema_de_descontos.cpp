#include <stdio.h>
#include <math.h>
main()
{
	int desconto;
	float preco;
	printf("Sistema de descontos\nDigite o valor da compra:R$");
	scanf("%f", &preco);
	if (preco>500){
		desconto=(preco-500)/100;
		printf("\nO valor da compra:R$ %.2f \nPorcentagem de desconto: %d \nValor final: R$ %.2f", preco, desconto, preco-desconto*(preco/100));
	}
	else{
		printf("Apenas compras supereiores a R$500,00 recebem descontos.\nValor final: R$%.2f", preco);
	}
}
