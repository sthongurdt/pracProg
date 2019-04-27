#include <stdio.h>
#include <stdlib.h>

void mensaje(){
	printf("\nse esta ejecutando la funcion mensaje\n");
}

int suma(int a, int b){
	return a+b;
}

double divis(int a, int b){
	return a/b;
}

void main(){
	mensaje();
	printf("\nse esta ejecutando la funcion suma, %d\n", suma(6,9));
	printf("\nse esta ejecutando la funcion division, %f\n", divis(6,9));
}

