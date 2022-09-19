#include <stdio.h>
main()
{
	int cont;
	float media, nota, total;
	printf("Iremos calcular a media dos alunos.\n");
	for (cont=1;cont<=4;cont++){
		printf("Digite a nota:");
		scanf("%f", &nota);
		total = total + nota;
	}
	media = total/4;
	printf("A media do aluno = %.2f", media);
}
