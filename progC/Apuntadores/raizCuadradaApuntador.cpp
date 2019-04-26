#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

float * raiz(float a, float b, float c){
	float *raices;
	float discriminante;
	raices = new float [2];

	discriminante = b*b - 4*a*c;
	if (discriminante >= 0 && a != 0){
		raices[0] = (-b + sqrt(discriminante))/2*a;
		raices[1] = (-b - sqrt(discriminante))/2*a;
		return raices;
	}
	return NULL;
}

int main(int argc, char *argv[]){

	float *r;
	float a,b,c;

	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);

	r = raiz(a,b,c);

	cout << "raiz 1 = " << r[0] << endl;
	cout << "raiz 2 = " << r[1] << endl;
	
	return 0;
}
