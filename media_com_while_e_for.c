#include <stdio.h>

int main()
{
	int cont, stop;
	char cod;
	float nota,media,total;
	total =0;
	stop=1;
	printf("Programa para calcular a media dos alunos.\n");
	while (stop !=0) {
		for (cont=1;cont<=4;cont++) {
			printf("Digite a nota:");
			scanf("%f", &nota);
			total= total+nota;
		}
		media=total/4;
		printf("A media do aluno = %.2f\n",media);
		nota=0;
		total=0;
		printf("\nPara calcular mais uma nota, digite qualquer numero. \nPara sair digite 0\n");
	   	scanf("%d",&stop);
	}

}
