#pragma once
class Nodo
{
private:
	int valor;
	Nodo* siguiente;

public:
	Nodo();
	Nodo(int valor);

	void setValor(int valor);
	int getValor();

	void setSiguiente(Nodo *nodo);
	Nodo* getSiguiente();
};

