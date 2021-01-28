#include "Pila.h"

Pila::Pila()
{
	this->cabeza = nullptr;
	this->tamanno = 0;
}

Nodo* Pila::getCabeza()
{
	return cabeza;
}

int Pila::getTamanno()
{
	return tamanno;
}

void Pila::push(int valor)
{
	Nodo* nuevoNodo = new Nodo(valor);
	nuevoNodo->setSiguiente(cabeza);
	cabeza = nuevoNodo;
	tamanno++;
}

Nodo* Pila::pop()
{
	Nodo* out = cabeza;
	cabeza = out->getSiguiente();
	tamanno--;
	return out;
}
