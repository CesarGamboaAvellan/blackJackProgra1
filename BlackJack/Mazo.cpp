#include "Mazo.h"
#include "Carta.h"
#include <iostream>

Mazo::Mazo() {

}
Mazo::~Mazo() {

}
void Mazo::inicializar() {
	// se inicializan los contadores, el valor 2, se debe a que se les asignara el palo de 2 a 14
	int count = 0;
	int picas = 2;
	int corazones = 2;
	int treboles = 2;
	int diamantes = 2;
	for (int numeroDeCartas = 0; numeroDeCartas < cartasDeUnMazo; numeroDeCartas++) {
		if (numeroDeCartas <= 12) {
			cartas[numeroDeCartas].setPalo("Picas"); // Picas
			cartas[numeroDeCartas].setValor(picas);  // asignamos el valor de la carta, iniciando en 2
			picas++;
		}
		else if (numeroDeCartas > 12 && numeroDeCartas <= 25) {
			cartas[numeroDeCartas].setPalo("Corazones"); // corazones
			cartas[numeroDeCartas].setValor(corazones);  // asignamos el valor de la carta, iniciando en 2
			corazones++;
		}
		else if (numeroDeCartas > 25 && numeroDeCartas < 39) {
			cartas[numeroDeCartas].setPalo("Trebol");  // Trebol
			cartas[numeroDeCartas].setValor(treboles);
			treboles++;
		}
		else if (numeroDeCartas > 38) {
			cartas[numeroDeCartas].setPalo("Diamantes");  // Diamantes
			cartas[numeroDeCartas].setValor(diamantes);
			diamantes++;
		}
	}
}
// Nota, por el momento lo puse a recibir un int, para asegurarme que se estan guardando las cartas
Carta Mazo::tomarCarta(int i) {
	return cartas[i];
}
void Mazo::barajar() {

}