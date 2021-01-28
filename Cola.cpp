#include "Cola.h"

Cola::Cola()
{
	this->inicio = nullptr;
	this->fin = nullptr;
	this->tamanno = 0;
}

Nodo* Cola::getInicio()
{
	return inicio;
}

Nodo* Cola::getFin()
{
	return fin;
}

int Cola::getTamanno()
{
	return tamanno;
}

void Cola::push(int valor)
{
	Nodo* nuevoNodo = new Nodo(valor);
	nuevoNodo->setSiguiente(nullptr);

	if (tamanno==0)
	{
		inicio = nuevoNodo;
	}
	else
	{
		fin->setSiguiente(nuevoNodo);
	}
	fin = nuevoNodo;
	tamanno++;
}

Nodo* Cola::pop()
{
	Nodo* out = inicio;

	if (inicio==fin)
	{
		inicio = nullptr;
		fin = nullptr;
	}
	else
	{
		inicio = inicio->getSiguiente();
	}

	tamanno--;

	return out;
}
