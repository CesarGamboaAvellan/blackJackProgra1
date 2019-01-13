#pragma once
#include "Carta.h"
class JugadorGenerico {
private:
	std::string nickName;
public:
	JugadorGenerico();
	~JugadorGenerico();
	void pedirCarta(Carta*);
};