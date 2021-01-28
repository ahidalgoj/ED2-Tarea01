#pragma once

#include "Nodo.h"

class Cola
{
private:
	Nodo* inicio;
	Nodo* fin;
	int tamanno;

public:
	Cola();

	Nodo* getInicio();
	Nodo* getFin();

	int getTamanno();

	void push(int valor);
	Nodo* pop();
};

