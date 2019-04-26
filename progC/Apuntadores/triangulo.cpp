#include <iostream>

using namespace std;

typedef struct {
	float x,y;
} Punto;

typedef struct {
	Punto p1, p2, p3;
	float b,h,a;
} Triangulo;

float area (Triangulo *t){
	*t.a = *t.b * *t.h / 2;
	return *t.a;
}

int main(){
	 
	Triangulo tr;
	return 0;
}
