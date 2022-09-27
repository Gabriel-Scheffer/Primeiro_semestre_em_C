#include <stdio.h>
#include <math.h>
main()
{
	int cont, bolsonaro, lula, branco, votos;
	printf("Iremos fazer uma contagem de votos.");
	cont = 5;
	votos = 0;
	bolsonaro = 0;
	lula = 0; 
	branco = 0;
	while (cont != 0){
		printf("\nPara votar no candidato, digite o numero correspondente. \n Branco = 1 \n Bolsonaro = 2 \n Lula = 3 \n Sair e ver o resultado = 0\n Seu voto:");
		scanf("%d", &votos);
		printf("\n voto computado com sucesso \n*******************************\n");
		switch (votos){
			case 1:
				branco++;
				break;
			case 2:
				bolsonaro++;
				break;
			case 3:
				++lula;
				break;
			case 0:
				cont=0;
				break;
		}
	}
	printf("Resultado \n Bolsonaro = %d \n lula = %d \n branco = %d", bolsonaro , lula, branco);
}
