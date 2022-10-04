#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float total, notas [ 4 ];
	int i;
	total = 0;
	
	for (i=0; i<4; i++){
		printf("Entre com a %d nota do aluno:", i+1);
		scanf("%f", &notas[i]);
		total=notas[i]+total;
	}
	
	for (i=0; i<4; i++){
		printf("Nota %d = %.2f\n", i+1, notas[i]);
	}
	printf("A media do aluno = %.2f", total/4  );
}
	

