#pragma once

#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista
{
private:
	Nodo* cabeza;
	int tamanno;

	void printNodo(Nodo* nodo);

public:
	Lista();

	Nodo* getCabeza();
	int getTamanno();

	void add(int valor);
	Nodo* remove(int valor);
	
	string getListaInversa(Nodo* cabeza);

	void printListaInversa(Nodo* cabeza);

};

