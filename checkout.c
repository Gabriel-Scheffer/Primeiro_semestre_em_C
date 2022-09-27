#include <stdio.h>
#include <math.h>
int main()
{
	int quant_sabao, quant_alcool, quant_sabonete, quant_escova, quant_amaciante, cont, dia;
	float preco_sabao, preco_alcool, preco_sabonete, preco_escova, preco_amaciante, total, clientes, faturamento;
	
	printf("Sistema de checkout\n");
	printf("Para iniciar o sistema digite 1 :");
	scanf("%d", &cont);
	preco_sabao = 3; 
	preco_alcool = 2;
	preco_sabonete = 1.5;
	preco_escova =3.2;
	preco_amaciante =3.9;
	quant_sabao=0;
	quant_alcool=0;
	quant_sabonete=0;
	quant_escova=0;
	quant_amaciante=0;
	total=0;
	cont = 1; 
	if (cont>=1 && cont<=7){
		while (cont != 7){
			printf("\nDigite o codigo referente ao produto selecionado \n 1 = sabao em po \n 2 = alcool \n 3 = sabonete \n 4 = escova \n 5 = amaciante \n 6 = finalizar compra \n 7 = encerrar caixa\n Codigo:");
			scanf ("%d", &cont);
			switch (cont) {
				case 1:
					printf("digite a quantidade de sabao em po:");
					scanf ("%d", &quant_sabao);
						if (quant_sabao>=200){
							total = (quant_sabao / 200) * preco_sabao + total;
							printf("produto adicionado com sucesso\n");
						}
						
						else {
							printf("Quantidade inferior a minima permitida, tente novamente.");
						}
						break;
				case 2:
					printf("Digite a quantidade de alcool:");
					scanf("%d", &quant_alcool);
					if (quant_alcool>=500){
						total = (quant_alcool/500)*preco_alcool + total;
						printf("produto adicionado com sucesso\n");
					}
					else {
						printf("Quantidade inferior a minima permitida, tente novamente.");
					}
					break;
				case 3:
					printf("Digite a quantidade de sabonete:");
					scanf("%d", &quant_sabonete);
					if (quant_sabonete>=1){
						total= quant_sabonete*preco_sabonete + total;
						printf("produto adicionado com sucesso\n");
					}
					else {
						printf("Quantidade inferior a minima permitida, tente novamente.\n");
					}
					break;
				case 4:
					printf("Digite a quantidade de escova:");
					scanf("%d", &quant_escova);
						if(quant_escova>=1){
						total= quant_escova*preco_escova + total;
						printf("produto adicionado com sucesso\n");
					}
					else {
						printf("Quantidade inferior a minima permitida, tente novamente.\n");
					}
					break;
				case 5:
					printf("Digite a quantidade de amaciante");
					scanf("%d", &quant_amaciante);
					if(quant_amaciante>=500){
						total= (quant_amaciante/500)*preco_amaciante+total;
						printf("produto adicionado com sucesso\n");
					}
					else {
						printf("Quantidade inferior a minima permitida, tente novamente.\n");
					}
					break;
				case 6:
					printf("NOTA FISCAL \n sabao em po %d x R$ %.2f = %.2f \n Amaciante %d X R$ %.2f = R$%.2f  \n  Escova %d x R$ %.2f = R$ %.2f \n Sabonete %d x R$ %.2f = R$ %.2f \n Alcool %d x R$ %.2f = R$ %.2f \n", quant_sabao, preco_sabao, (quant_sabao/200)*preco_sabao , quant_amaciante, preco_amaciante, (quant_amaciante/500)*preco_amaciante, quant_escova, preco_escova,quant_escova*preco_escova, quant_sabonete, preco_sabonete, quant_sabonete*preco_sabonete, quant_alcool, preco_alcool, (quant_alcool/500)*preco_alcool, total);
					cont = 1;
					dia++;
					faturamento = total+ faturamento;	
					quant_sabao = 0;
					quant_amaciante = 0;
					quant_sabonete = 0;
					quant_alcool = 0;
					quant_escova = 0;
					total = 0;
					
					break;	
				case 7: 
					printf("CAIXA ENCERRADO \n Relatorio diario, o numero de cliente foi %d e o faturamento total R$%.2f", dia, faturamento);
			}
		}
	}
	else {
		printf("Opção digita é invalida:\n");
	}
	printf("%d", total);
}

