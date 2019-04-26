#include <stdio.h>
#include <malloc.h>

int main(int argc, char *argv[]){
	int *v, i, tam;

	if(argc < 2){
		printf("Use: programa <tamano>\n");
	}
	else{
		tam = atoi(argv[1]);
		v = (int *)malloc(tam*sizeof(int));
		for(i=0; i<tam; i++){
			v[i] = i;
			printf("%i \n", v[i]);
		}
	} 
	return 0;
}
