#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int i=0,salario[5]={0}, mes[5]={0},total=0;
	printf("Sistema de controle financeiro empresarial.");
	
	for(i=0;i<5;i++)
	{
		printf("\nDigite o sal�rio do %d m�s:R$",i+1);
		scanf("%d", &salario[i]);
		if(salario[i]>=salario[i-1])
		{
			mes[i]=salario[i];
			total=mes[i]+total;
		}
		else
		{
			if (salario[i-1]>salario[i])
			{
				printf("O sal�rio n�o pode ser menor que o m�s anterior\n�ltimo sal�rio:R$%d\n",salario[i-1]);
				i--;
				
			}
		}
	}
	for(i=0;i<4;i++)
	{
		if (salario[i+1]>salario[i])
		{
		
			printf("Voc� teve um aumento no m�s %d indo %d | era de R$%d e foi para R$%d\n", i+1,i+2,salario[i],salario[i+1]);
		}
	}
	printf("\nA renda dos 5 ultimos meses foi de R$%d",total);
}
