#include "tadPunto.h"

typedef struct{
	Punto p[3];
} Triangulo;

void mostrarTriangulo(Triangulo);
Triangulo crearTriangulo(Punto, Punto, Punto);
float area(Triangulo);


