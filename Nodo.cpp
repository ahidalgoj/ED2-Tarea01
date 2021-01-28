#include "Nodo.h"

Nodo::Nodo()
{
	this->valor = 0;
	this->siguiente = nullptr;
}

Nodo::Nodo(int valor)
{
	this->valor = valor;
	this->siguiente = nullptr;
}

void Nodo::setValor(int valor)
{
	this->valor = valor;
}

int Nodo::getValor()
{
	return this->valor;
}

void Nodo::setSiguiente(Nodo* nodo)
{
	this->siguiente = nodo;
}

Nodo* Nodo::getSiguiente()
{
	return this->siguiente;
}
