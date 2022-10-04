#include <stdio.h>
#include <math.h>
int main()
{
	int cont, idade, anos_15, anos_30, anos_45, anos_60, anos_61;
	printf("Iremos calcular a media de idade das pessoas.\n");
	cont=1, anos_15=0, anos_30=0, anos_45=0, anos_60=0, anos_61=0;
	
	while (cont<=3){
		printf("Digite a idade referente a %d pessoa:",cont);
		scanf("%d", &idade);
		cont++;
		if (idade<=15){
			anos_15++;
		}
			else {
				if (idade>=16 && idade<=30){
					anos_30++;
				}
				else {
					if(idade>=31 && idade<=45){
						anos_45++;
					}
					else{
						if (idade>=46 && idade<=60){
							anos_60++;
						}
						else {
							if(idade>=61){
								anos_61;;
							}
						}
					}
				}
			}
	}
	printf("A quantidade de pessoas em cada faixa etaria: \nAte 15 anos: %d \nDe 16 a 30 anos: %d \nDe 31 a 45 anos: %d \nDe 46 a 60 anos:%d \nAcima de 61 anos:%d",anos_15, anos_30, anos_45, anos_60, anos_61);
}
