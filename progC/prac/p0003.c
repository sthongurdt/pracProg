#include <stdio.h>
#include <stdlib.h>

void main(){
	int edad;
	
	printf("Introdusca su edad\n");
	scanf("%d",&edad);
	/* 
	>(mayor) 
	<(menor) 
	==(igual que) 
	!=(diferente a) 
	&&(y) 
	||(o)
	*/
	if (edad>18){
		printf("Es mayor de edad\n");
	}
	else{
		printf("Es menor de edad\n");
	}
	if (edad>18 && edad<40){
		printf("Puede prestar servicio militar\n");
	}
	else{
		printf("No puede prestar servicio militar\n");
	}
}
