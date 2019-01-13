#include "Mazo.h"
#include <iostream>
int main() {
	Mazo nuevoMazo;
	nuevoMazo.inicializar();
	// nota: estoy imprimiendo la carta que se guardo en la posicion 23, solo para mostrar que se creo la baraja
	std::cout << "Se creo la siguiente carta en la posicion 23 del array" << std::endl;
	std::cout<< "Palo: " << nuevoMazo.tomarCarta(23).getPalo();
	std::cout << "Valor: " << nuevoMazo.tomarCarta(23).getValor();
	std::cout<< std::endl;
	// nota: estoy imprimiendo la carta que se guardo en la posicion 0, solo para mostrar que se creo la baraja
	std::cout << "Se creo la siguiente carta en la posicion 0 del array" << std::endl;
	std::cout << "Palo: " << nuevoMazo.tomarCarta(0).getPalo();
	std::cout << "Valor: " << nuevoMazo.tomarCarta(0).getValor();
	std::cout << std::endl;
	// nota: estoy imprimiendo la carta que se guardo en la posicion 51, solo para mostrar que se creo la baraja
	std::cout << "Se creo la siguiente carta en la posicion 51 del array" << std::endl;
	std::cout <<"Palo: " << nuevoMazo.tomarCarta(51).getPalo();
	std::cout <<"Valor: "<< nuevoMazo.tomarCarta(51).getValor();
	std::cout << std::endl;
	return 0;
}