/* TAD Punto: los elementos que lo conforman son dos
 * coordenadas: x,y cada una perteneciente al conjunto de 
 * numeros reales
 */

typedef struct {
	float x,y;
}Punto ;

/* Las operaciones que se pueden realizar son el TAD Punto
 * son:
 */

Punto crearPunto(float, float);
float obtenerCoordX(Punto);
float obtenerCoordY(Punto);
Punto puntoMedio(Punto, Punto);
float pendienteEntrePuntos(Punto, Punto);
float distanciaPunto(Punto, Punto);

