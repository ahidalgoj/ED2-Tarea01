// Tarea01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Gestor.h"

using namespace std;

int main()
{
    Gestor gestor;
    int opcion = 1;
    while (opcion != 0) {
        cout << "\n\nDigite una opcion:" << endl;
        cout << "1. Agregar un valor a la pila" << endl;
        cout << "2. Agregar un valor a la cola" << endl;
        cout << "3. Agregar un valor a la lista ordenada" << endl;
        cout << "4. Pasar un valor de la pila a la cola" << endl;
        cout << "5. Pasar un valor de la pila a la lista" << endl;
        cout << "6. Pasar un valor de la cola a la pila" << endl;
        cout << "7. Pasar un valor de la cola a la lista" << endl;
        cout << "8. Pasar un valor de la lista a la pila" << endl;
        cout << "9. Pasar un valor de la lista a la cola" << endl;
        cout << "10. Imprimir la lista" << endl;
        cout << "11. Imprimir la lista en forma inversa" << endl;
        cout << "0. Salir\n\n";

        cin >> opcion;
        cout << "\n";

        switch (opcion) {
        case 0:
            break;
        case 1:
            gestor.agregarAPila();
            break;
        case 2:
            gestor.agregarACola();
            break;
        case 3:
            gestor.agregarALista();
            break;
        case 4:
            gestor.pasarDePilaACola();
            break;
        case 5:
            gestor.pasarDePilaALista();
            break;
        case 6:
            gestor.pasarDeColaAPila();
            break;
        case 7:
            gestor.pasarDeColaALista();
            break;
        case 8:
            gestor.pasarDeListaAPila();
            break;
        case 9:
            gestor.pasarDeListaACola();
            break;
        case 10:
            gestor.imprimirLista();
            break;
        case 11:
            gestor.imprimirListaInversa();
            break;
        default:
            cout << "***Digite una opcion valida***" << endl;
        }
    }

    return 0;
}
