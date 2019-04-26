##include "tadPunto.h"

/* funcion que crea un punto asignando valores a sus
 * coordenadas
 * Entrada: 2 numeros reales
 * Salida: Punto
 */

Punto crearPunto(float x, float y){
	Punto p;
	p.x = x;
	p.y = y;
	return p;
}

/* funcion que devuelve la coordenada X de un Punto
 * Entrada: Punto
 * Salida: coordenada X (real)
 */
float obtenerCoordX(Punto p){
	return p.x;
}

/* funcion que devuelve la coordenada Y de un Punto
 * Entrada: Punto
 * Salida: coordenada Y (real)
 */
float obtenerCoordY(Punto p){
	return p.y;
}

/* Funcion que devuelve el punto medio entre un par
 * de puntos
 * Entrada: 2 Puntos
 * Salida: 1 Punto
 */
Punto puntoMedio(Punto p1, Punto p2){
	Punto p3;
	p3.x = (p1.x + p2.x)/2;
	p3.y = (p1.y + p2.y)/2;
	return p3;
}

float pendienteEntrePuntos(Punto p1, Punto p2){
	float m;
	m = (p2.y - p1.y)/(p2.x - p1.x);
	return m;
}

float distanciaPunto(Punto p1, Punto p2){
	float d;
	d = sqrt(pow((p1.x-p2.x),2)+pow((p2.y-p1.y),2));
	return d;
}
