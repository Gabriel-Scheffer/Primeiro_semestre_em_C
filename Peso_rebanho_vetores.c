#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	int peso[3]={0},mes1[3]={0}, mes2 [3]={0}, mes3[3]={0},i, peso_inicial=0, peso_final=0, total=0;
	printf("sistema para controle de peso.\n");
	printf("Digite o peso do animal no 1 m�s.\n");
	for (i=0; i<3; i++)
	{
		printf("Animal %d = Peso:", i+1);
		scanf("%d", &peso[i]);
		mes1[i]=peso[i];
		peso_inicial=mes1[i]+peso_inicial;
	}
	
	printf("\nDigite peso do animal no 2 m�s.\n");
	for (i=0; i<3; i++)
	{
		printf("Animial %d = peso:",i+1);
		scanf("%d", &peso[i]);
		mes2[i]=peso[i];
	}
	printf("\nDigite peso do animal no 3 m�s.\n");
	for (i=0; i<3; i++)
	{
		printf("Animial %d = peso:",i+1);
		scanf("%d", &peso[i]);
		mes3[i]=peso[i];
		peso_final=mes3[i]+peso_final;
		total=peso_final-peso_inicial;
	}
	
	for (i=0; i<3;i++)
	{
		if(mes1[i]>=mes2[i] && mes1[i]>=mes3[i])
		{
			printf("\nO animal %d teve o maior peso no primeiro m�s =  %dKG\n",i+1, mes1[i]);
		}
		else
		{
			if (mes2[i]>=mes1[i] && mes2[i]>=mes3[i])
			{
				printf("\nO animal %d teve o maior peso no segundo m�s =  %dKG\n", i+1, mes2[i]);
			}
			else
			{
				if (mes3[i]>=mes1[i] && mes3[i]>=mes2[i])
				{
					printf("\nO animal %d teve o maior peso no terceiro m�s =  %dKG\n", i+1, mes3[i]);	
				}
			}
		}
	}
	
	printf("\n RELAT�RIO COMPLETO \n");
	printf("\nAcompanhe o peso do animal a cada m�s.\n");
	for(i=0;i<3;i++)
	{
		printf("Aniaml %d = M�s 1 :%dKG  ||| M�s 2 :%dKG ||| M�s 3 :%dKG\n",i+1, mes1[i],mes2[i],mes3[i]);
			
	}
		
	if (peso_inicial>peso_final)
	{
		printf("\nNo primeiro m�s o rebanho estava mais pesado com %dKG \n"
		"E com a diferen�a de peso de %dkg", peso_inicial, total);
	}
	else
	{
		if (peso_final>peso_inicial)
		{
			printf("\nParab�ns o seu rebanho est� mais pesado do que no primeiro m�s, atualmente com %dkg"
			"Com uma diferen�a de peso %dKG",peso_final, total);
		}
	}
		printf("\nO peso total do rebanho no primeiro m�s era de = %dKG\n"
	"O peso total do rebanho no ultimo m�s era de = %dKG",peso_inicial, peso_final);
	
	
	
}
