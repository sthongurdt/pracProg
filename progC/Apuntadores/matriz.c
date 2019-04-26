#include <stdio.h>
#include <malloc.h>

int main(int argc, char *argv[]){
	float **matriz; 
	int f, c, i, j;

	if(argc < 3){
		printf("Use: programa <filas> <columnas>\n");
	}
	else{
		f = atoi(argv[1]);
		c = atoi(argv[2]);
		matriz = (float **) malloc(sizeof(float)*f*c);
		for(i=0; i<f; i++)
			matriz[i] = (float *)malloc(sizeof(float)*c);
		for(i=0; i<f; i++){
			for(j=0; j<c; j++){
				matriz[i][j] = i;
				printf("%.2f ", matriz[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
