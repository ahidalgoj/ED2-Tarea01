#pragma once

#include "Nodo.h"

class Pila
{
private:
	Nodo* cabeza;
	int tamanno;

public:
	Pila();

	Nodo* getCabeza();

	int getTamanno();

	void push(int valor);
	Nodo* pop();

};

