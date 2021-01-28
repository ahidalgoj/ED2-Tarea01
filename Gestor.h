#pragma once

#include "Pila.h"
#include "Cola.h"
#include "Lista.h"

class Gestor
{
private:
	Pila miPila;
	Cola miCola;
	Lista miLista;

public:

	Gestor();

	void agregarAPila();
	void agregarACola();
	void agregarALista();

	void pasarDePilaACola();
	void pasarDePilaALista();

	void pasarDeColaAPila();
	void pasarDeColaALista();

	void pasarDeListaAPila();
	void pasarDeListaACola();

	void imprimirLista();
	void imprimirListaInversa();
};

