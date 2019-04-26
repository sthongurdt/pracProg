#include <stdio.h>
#include "tadTriangulo.h"

int main(int argc, char *argv[]){
	Triangulo t;
	Punto a, b, c;
	a = crearPunto(0,0);
	b = crearPunto(0,1);
	c = crearPunto(1,1);
	t = crearTriangulo(a, b, c);
	mostrarTriangulo(t);
	printf("Area = %.2f\n", area(t));
	return 0;
}
