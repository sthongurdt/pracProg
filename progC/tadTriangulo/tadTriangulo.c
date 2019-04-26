#include "tadTriangulo.h"
#include <stdio.h>
#include <math.h>

void mostrarTriangulo(Triangulo t){
	printf("Punto 1: %.2f %.2f \n", t.p[0].x, t.p[0].y);
	printf("Punto 2: %.2f %.2f \n", t.p[1].x, t.p[1].y);
	printf("Punto 2: %.2f %.2f \n", t.p[2].x, t.p[2].y);
}

Triangulo crearTriangulo(Punto a,Punto b, Punto c){
	Triangulo T;
	T.p[0].x = X(a);
	T.p[0].y = Y(a);
	T.p[1].x = X(b);
	T.p[1].y = Y(b);
	T.p[2].x = X(c);
	T.p[2].y = Y(c);
	return T;
}

float area(Triangulo t){
	float area, s;
	float d1, d2, d3;
	d1 = distanciaEntrePuntos(t.p[0], t.p[1]);
	d2 = distanciaEntrePuntos(t.p[0], t.p[2]);
	d3 = distanciaEntrePuntos(t.p[2], t.p[1]);
	s = (d1 + d2 + d3)/2;
	area = sqrt(s*(s - d1)*(s - d2)*(s - d3));
	return area;
}
