#include <stdio.h>
#include <malloc.h>

typedef struct {
	int filas;
	int columnas;
	double **valores;
} Matriz;

Matriz crearMatriz(int, int);
void inicializarMatriz(Matriz *, double);
void imprimirMatriz(Matriz);
Matriz sumarMatrices(Matriz, Matriz);
Matriz multMatrices(Matriz, Matriz);

