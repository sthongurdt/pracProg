#include <stdio.h>
#include <malloc.h>

int main(int argc, char *argv[]){
	int *vector, tam, i;

	if(argc < 2){
		printf("Use: programa <entero> \n");
	}
	else{
		tam = atoi(argv[1]);
		vector = (int *) malloc(tam*sizeof(int));
		for(i=0; i<tam; i++){
			vector[i] = i;
			printf("%i \n", vector[i]);
		}
	}
	return 0;
}
