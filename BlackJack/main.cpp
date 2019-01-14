#include "Mazo.h"
#include <iostream>
#include <time.h>
int main() {
	// Requerido para usar el metodo shuffle

	srand(time(NULL));
	Mazo nuevoMazo;
	// Inicializa la baraja de cartas

	nuevoMazo.inicializar();

	// baraja las cartas 

	nuevoMazo.barajar();

	// retorna la primera carta en el deck, incrementa el contador del array cada vez
	// ya el deck va a estar barajado en este punto
	// para efectos de prueba, se imprimen 4 cartas
	for (int i = 0; i < 5; i++) {
		nuevoMazo.tomarCarta(i);
	}
	return 0;
}