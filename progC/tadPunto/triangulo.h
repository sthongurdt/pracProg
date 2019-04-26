#include "tadPunto.h"

typedef struct {
	Punto p1,p2,p3;
}Triangulo;

Triangulo crearTriangulo(Punto, Punto, Punto);
float areaTriangulo(Triangulo);
