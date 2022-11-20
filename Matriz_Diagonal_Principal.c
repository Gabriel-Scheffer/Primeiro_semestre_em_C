#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int tam=3, elementos[tam], i;
	int matriz[tam][tam], l=0, c=0; // l = linha , c = coluna;
	printf("Digite os valores da matriz %d X %d\n", tam, tam);
	
	for (l=0; l<tam; l++)
	for	(c=0; c<tam; c++)
	{
		printf("Linha %d | Coluna %d = ", l, c);
		scanf("%d", &matriz[l][c]);
	}
	
	
	
	for (l=0; l<tam; l++)
	for	(c=0; c<tam; c++)
	{
			if (l==c)
			{
				elementos[l]=matriz[l][c];
			}
		}
	
	for(i=0; i<tam;i++)
	{
		printf("Elemento %d\n", elementos[i]);
	}
	
	
	
	
}
