#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	
	
	int tam=5, cont=0, qtd=0;
	int matriz [tam][tam], i=0,j=0;
	
	
	printf("Matriz %d X %d \nDigite os valores\n", tam, tam);
	
	for (i=0;i<tam;i++)
	for	(j=0;j<tam;j++)
	{
		printf("Linha %d | Coluna %d =", i,j);
		scanf("%d", &matriz[i][j]);
	}
	
	printf("Os valores da diagonal segundária são:");
	
	for(i=0;i<tam;i++)
	{
		printf("%d\n", matriz[i][tam-1-i]);
	
	}
	
	
	for(i=0;i<tam;i++)
	{
		cont+=matriz[i][tam-1-i];
	}
	
	for(i=0;i<tam;i++)
	{
		if (cont>=20)
		{
			qtd++;
		}
	}
	
	printf("Na diagonal secundaria %d são maiores que 20",qtd);
	
	
}
