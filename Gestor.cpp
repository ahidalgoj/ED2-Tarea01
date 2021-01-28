#include "Gestor.h"
#include <iostream>

using namespace std;

Gestor::Gestor()
{
}

void Gestor::agregarAPila()
{
	int valor = 0;

	cout << "Cual valor desea agregar?" << endl;
	cin >> valor;

	miPila.push(valor);

	cout << "El valor " << valor << " fue agregado a la pila." << endl;
}

void Gestor::agregarACola()
{
	int valor = 0;

	cout << "Cual valor desea agregar?" << endl;
	cin >> valor;

	miCola.push(valor);

	cout << "El valor " << valor << " fue agregado a la cola." << endl;
}

void Gestor::agregarALista()
{
	int valor = 0;

	cout << "Cual valor desea agregar?" << endl;
	cin >> valor;

	miLista.add(valor);

	cout << "El valor " << valor << " fue agregado a la lista." << endl;
}

void Gestor::pasarDePilaACola()
{
	if (miPila.getTamanno()==0)
	{
		cout << "La pila esta vacia." << endl;
	}
	else
	{
		Nodo* out = miPila.pop();

		miCola.push(out->getValor());

		cout << "Se paso el valor " << out->getValor() << " de la pila a la cola." << endl;
	}
}

void Gestor::pasarDePilaALista()
{
	if (miPila.getTamanno() == 0)
	{
		cout << "La pila esta vacia." << endl;
	}
	else
	{
		Nodo* out = miPila.pop();

		miLista.add(out->getValor());

		cout << "Se paso el valor " << out->getValor() << " de la pila a la lista." << endl;
	}
}

void Gestor::pasarDeColaAPila()
{
	if (miCola.getTamanno() == 0)
	{
		cout << "La cola esta vacia." << endl;
	}
	else
	{
		Nodo* out = miCola.pop();

		miPila.push(out->getValor());

		cout << "Se paso el valor " << out->getValor() << " de la cola a la pila." << endl;
	}
}

void Gestor::pasarDeColaALista()
{
	if (miCola.getTamanno() == 0)
	{
		cout << "La cola esta vacia." << endl;
	}
	else
	{
		Nodo* out = miCola.pop();

		miLista.add(out->getValor());

		cout << "Se paso el valor " << out->getValor() << " de la cola a la lista." << endl;
	}
}

void Gestor::pasarDeListaAPila()
{
	if (miLista.getTamanno() == 0)
	{
		cout << "La lista esta vacia." << endl;
	}
	else
	{
		int valor = 0;

		cout << "Cual valor desea pasar a la pila?" << endl;
		cin >> valor;

		Nodo* out = miLista.remove(valor);

		if (out==nullptr)
		{
			cout << "El valor " << out->getValor() << " no se encontraba en la lista." << endl;
		}
		else
		{
			miPila.push(valor);
			cout << "El valor " << valor << " se elimino de la lista y se paso a la pila." << endl;
		}
	}
}

void Gestor::pasarDeListaACola()
{
	if (miLista.getTamanno() == 0)
	{
		cout << "La lista esta vacia." << endl;
	}
	else
	{
		int valor = 0;

		cout << "Cual valor desea pasar a la cola?" << endl;
		cin >> valor;

		Nodo* out = miLista.remove(valor);

		if (out == nullptr)
		{
			cout << "El valor " << out->getValor() << " no se encontraba en la lista." << endl;
		}
		else
		{
			miCola.push(valor);
			cout << "El valor " << valor << " se elimino de la lista y se paso a la cola." << endl;
		}
	}
}

void Gestor::imprimirLista()
{
	if (miLista.getTamanno() == 0)
	{
		cout << "La lista esta vacia." << endl;
	}
	else
	{
		Nodo* nodoActual = miLista.getCabeza();

		cout << "El contenido actual de la lista es:" << endl;

		while (nodoActual->getSiguiente()!=nullptr)
		{
			cout << nodoActual->getValor() << " - ";

			nodoActual = nodoActual->getSiguiente();
		}

		cout << nodoActual->getValor();
	}
}

void Gestor::imprimirListaInversa()
{
	if (miLista.getTamanno() == 0)
	{
		cout << "La lista esta vacia." << endl;
	}
	else
	{
		Nodo* cabeza = miLista.getCabeza();

		cout << "El contenido inverso de la lista es:" << endl;

		cout << miLista.getListaInversa(cabeza);

		//miLista.printListaInversa(cabeza);
	}
}
