#include "Lista.h"
#include <iostream>
#include <string>

using namespace std;

void Lista::printNodo(Nodo* nodo)
{
	if (nodo->getSiguiente()!=nullptr)
	{
		printNodo(nodo->getSiguiente());

		cout << " - " + to_string(nodo->getValor());
	}
	else
	{
		cout << to_string(nodo->getValor());
	}
}

Lista::Lista()
{
	this->cabeza = nullptr;
	this->tamanno = 0;
}

Nodo* Lista::getCabeza()
{
	return cabeza;
}

int Lista::getTamanno()
{
	return tamanno;
}

void Lista::add(int valor)
{
	Nodo* nuevoNodo = new Nodo(valor);

	Nodo* aux1 = cabeza;
	Nodo* aux2 = aux1;

	while ((aux1!=nullptr)&&(aux1->getValor()<nuevoNodo->getValor()))
	{
		aux2 = aux1;
		aux1 = aux1->getSiguiente();
	}

	if (cabeza==aux1)
	{
		cabeza = nuevoNodo;
	}
	else
	{
		aux2->setSiguiente(nuevoNodo);
	}

	nuevoNodo->setSiguiente(aux1);

	tamanno++;
}

Nodo* Lista::remove(int valor)
{
	Nodo* out = cabeza;
	Nodo* anterior = nullptr;

	while ((out!=nullptr) && (out->getValor()!=valor) && (out->getValor()<valor))
	{
		anterior = out;
		out = out->getSiguiente();
	}

	if (anterior==nullptr)
	{
		cabeza = cabeza->getSiguiente();
	}
	else
	{
		anterior->setSiguiente(out->getSiguiente());
	}

	tamanno--;
	return out;
}

string Lista::getListaInversa(Nodo* cabeza)
{
	if (cabeza->getSiguiente() == nullptr)
	{
		return to_string(cabeza->getValor());
	}
	else
	{
		return getListaInversa(cabeza->getSiguiente()) + " - " + to_string(cabeza->getValor());
	}
}

void Lista::printListaInversa(Nodo* cabeza)
{
	printNodo(cabeza);
}
