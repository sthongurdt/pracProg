#include <stdio.h>
#include <stdlib.h>

void main(){
	int dia;

	printf("Que numero de dia es hoy?\n");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("Hoy es Domingo\n");
			break;
		case 2:
			printf("Hoy es Lunes\n");
			break;
		case 3:
			printf("Hoy es Martes\n");
			break;
		case 4:
			printf("Hoy es Miercoles\n");
			break;
		case 5:
			printf("Hoy es Jueves\n");
			break;
		case 6:
			printf("Hoy es Viernes\n");
			break;
		case 7:
			printf("Hoy es Sabado\n");
			break;
		default :
			printf("El dia no existe\n");
			break;
	}
}
