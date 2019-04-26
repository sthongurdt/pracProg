#include <stdio.h>
#include <math.h>

float * raices( float *a, float *b, float *c){
	float discriminante;
	float resultado[2];

	discriminante = (*b) * (*b) - 4 * (*a) * (*c);
	if ( discriminante > 0.0 ){
		resultado[0] = (-(*b) + sqrt(discriminante))/2*(*a);
		resultado[1] = (-(*b) - sqrt(discriminante))/2*(*a);
		return resultado;
	}
}

int main(int argc, char *argv[]){
	float *res;
	float a, b, c;

	a = 1.0;
	b = 2.0;
	c = 3.0;

	res = (float *)raices( &a, &b, &c);
	printf("%f %f\n", res[0], res[1]);

	return 0;
}
