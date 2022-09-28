#include <stdio.h>
#include <math.h>
main()
{
	int agendar, cont;
	printf("Sistema de agendamento laboratorial.");
	printf("\n Para iniciar o sistema digite 1: ");
	scanf("%d", &cont);
	while (cont!=9) {
		printf(" \n 1 = agendar consulta \n 2 = visualizar consultas agendadas \n 3 = cancelar consulta \n 4 = Finalizar \n COD:");
		scanf("%d", &cont);
		
		switch (cont){
			case 1:
				if (agendar<=7){
				printf("Consulta agendada com sucesso \n");
				agendar++;
			}
				else {
					printf("O número maximo de consultas foi atingido %d", agendar);
				}
				break;
			case 2:
				if (agendar>1){
				printf("\n Existem %d consultas agendadas para hoje.\n", agendar);
			}
				else {
					printf("Não existem consultas marcadas para hoje.");
				}
				break;
			case 3:
				if (agendar>1){
				agendar--;
				printf("Consulta cancelada com sucesso. \n o total de consultas = %d\n", agendar);
			}
			else {
				printf("Não existem consultas agendadas");
			}
				break;
			case 4:
				printf("\n O numero de consultas no dia de hoje foi de %d", agendar);
				cont=9;
				break;
		}
	}
}	
