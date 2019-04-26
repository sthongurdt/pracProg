#include <stdio.h>
#include <malloc.h>

int main(int argc, char *argv[]){
	float **m;
	int i, j, f, c;

	if(argc < 3){
		printf("Use: programa <filas> <columnas>\n");
	}
	else{
		f = atoi(argv[1]);
		c = atoi(argv[2]);
		m = (float **)malloc(f*c*sizeof(float));
		for(i=0; i<f; i++)
			m[i] = (float *)malloc(sizeof(float)*c);
		for(i=0; i<f; i++){
			for(j=0; j<c; j++){
				m[i][j] = i;
				printf("%.2f ", m[i][j]);
			}
			printf("\n");
		}
	} 
	return 0;
}
