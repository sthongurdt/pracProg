#include <stdio.h>

int main (int argc, char *argv[]){
	FILE *ar;
	char linea[80], *d, aux[10];
	char **listado;
	int numeroLineas=0, i;
	int *longitudes, suma=0;
	

	if( argc <= 1 ){
		fprintf(stderr, "programa <nombre_archivo>\n");
		exit(1);
	}
	else{
		if( (ar = fopen(argv[1], "r")) == NULL ){
			fprintf(stderr, "No se pudo abrir el archivo \n");
			exit(1);
		}
		
		while( (d = fgets(linea,80,ar)) != NULL ){
			numeroLineas++;
		}
		fclose(ar);

		longitudes = (int *)malloc(sizeof(int)*numeroLineas);
		ar = fopen(argv[1], "r");
		for(i=0; i<numeroLineas; i++){
			d = fgets(linea,80,ar);
			longitudes[i] = strlen(linea);
			suma += longitudes[i];
		}
		fclose(ar);
		ar = fopen(argv[1], "r");
		listado = (char **)malloc(suma * sizeof(char));
		for (i=0; i<numeroLineas; i++) {
			d = fgets(linea,80,ar);
			listado[i]  = (char *)malloc(longitudes[i]*sizeof(char));
			if( d != NULL ){
				//sscanf(linea, "%s", listado[i]);
				strcpy(listado[i], linea);
			}
		}
		for (i=0; i<numeroLineas; i++) {
			printf("%s", listado[i]);
		}

		return 0;
	}
}
