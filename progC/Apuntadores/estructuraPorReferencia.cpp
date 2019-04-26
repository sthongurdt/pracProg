#include <iostream>
#include <math.h>

using namespace std;

typedef struct {
	float x, y;
} Punto;


typedef struct {
	Punto v[3];
	float a, h, b;
} Triangulo;

float base(Triangulo *t){
	t->b = sqrt((t->v[1].x - t->v[0].x)*(t->v[1].x - t->v[0].x) + (t->v[1].y - t->v[0].y)*(t->v[1].y - t->v[0].y));
	return t->b;
}

float area(Triangulo *t){
	t->a = (t->b * t->h)/2;
	return t->a;
}

int main(){
	Triangulo triang;

	triang.v[0] = {0, 0};
	triang.v[1] = {0, 3};
	triang.v[2] = {2, 2};

	base(&triang);
	cout << triang.b << endl; 
	return 1;
}
