#include <stdio.h>
#include <math.h>

int main()

{
	int dia;
	printf("Digite um numero para ser relacionado ao dia da semana:");
	scanf ("%d", &dia);
	if (dia>=1 && dia<=7){
		switch (dia){
			case 1: printf("O dia %d � igual a domingo",dia);
			break;
				case 2: printf("O dia %d � igual a segunda-feira",dia);
			break;
				case 3: printf("O dia %d � igual a ter�a-feira",dia);
			break;
					case 4: printf("O dia %d � igual a quarta-feira",dia);
			break;
					case 5: printf("O dia %d � igual a quinta-feira",dia);
			break;
					case 6: printf("O dia %d � igual a sexta-feira",dia);
			break;
					case 7: printf("O dia %d � igual a sabado",dia);
			break;
		}
	}
	else{
	    printf("O valor digitado foi invalido");
	}
    
    
    
}   
