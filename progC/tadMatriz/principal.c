#include <stdio.h>
#include "Matriz.h"

//comentario

int main(int argc, char *argv[]){
        Matriz a, b, c, d;
        int filas, columnas;
        int valor1, valor2;

        filas = atoi(argv[1]);
        columnas = atoi(argv[2]);
        valor1 = atoi(argv[3]);
        valor2 = atoi(argv[4]);

        a = crearMatriz(filas, columnas);
        inicializarMatriz(&a, valor1);
        imprimirMatriz(a);

        b = crearMatriz(filas, columnas);
        inicializarMatriz(&b, valor2);
        imprimirMatriz(b);

	c = sumarMatrices(a, b);
        d = multMatrices(a , b);
        imprimirMatriz(c);
        imprimirMatriz(d);

        return 0;
}

