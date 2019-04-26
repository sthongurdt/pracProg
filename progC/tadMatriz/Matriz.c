#include "Matriz.h"

Matriz crearMatriz(int f, int c){
        Matriz m;
        int i,j;

        m.filas = f;
        m.columnas = c;

        m.valores = (double **)malloc(sizeof(double)*f*c);
        for(i=0; i<f; i++){
            m.valores[i] = (double *)malloc(sizeof(double)*c);
        }
        return m;
}

void inicializarMatriz(Matriz *m, double v){
        int i,j;
        for(i=0; i<m->filas; i++)
                for(j=0; j<m->columnas; j++)
                        m->valores[i][j] = v;
}

void imprimirMatriz(Matriz m){
        int i,j;
        for(i=0; i<m.filas; i++){
                for(j=0; j<m.columnas; j++)
                        printf("%.2f ", m.valores[i][j]);
                printf("\n");
        }
}

Matriz sumarMatrices(Matriz a, Matriz b){
        Matriz c;
        int i,j;
        c = crearMatriz(a.filas, a.columnas);
        for(i=0; i<a.filas; i++)
                for(j=0; j<a.columnas; j++)
                        c.valores[i][j] = a.valores[i][j] +
                                          b.valores[i][j];
        return c;
}

Matriz multMatrices(Matriz a, Matriz b){
        if(a.filas!=b.columnas){
                printf("Paila... las filas y columnas no coinciden.");
        }else{
                Matriz c;
                int i,j,k;
                c = crearMatriz(a.filas, b.columnas);
                for(i=0; i<a.filas; i++){
                        for(j=0; j<b.columnas; j++){
                                c.valores[i][j] = 0;
                                for(k=0; k<a.columnas; k++){
                                        c.valores[i][j]=(c.valores[i][j]+(a.valores[i][k]*b.valores[k][j]));
                                }
                        }
                }
                return c;
        }
}
