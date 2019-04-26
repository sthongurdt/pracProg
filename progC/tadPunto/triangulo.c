#include "tadPunto.h"
#include "triangulo.h"
#include "math.h"

Triangulo crearTriangulo(Punto p1, Punto p2, Punto p3){
	Triangulo t;
	t.a = distanciaPunto(p1,p3);
	t.b = distanciaPunto(p2,p3);
	t.c = distanciaPunto(p1,p2);
	return t;
}

float areaTriangulo(Triangulo t){
	float area,s;
	s = (t.a+t.b+t.c)/2;
	a = sqrt(s*(s-t.a)*(s-t.b)*(s-t.c));
	return a;
}
