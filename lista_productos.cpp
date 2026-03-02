#include <iostream>
using namespace std;

struct Producto {
    int codigo;
    string nombre;
    double precio;
};

struct Nodo {
    Producto data;
    Nodo* siguiente;
};

int main() {
    cout << "Nombre del Estudiante: [Tu Nombre Completo Aqui]" << endl;
    cout << "------------------------------------------" << endl;

    Nodo* primero = new Nodo;
    primero->siguiente = nullptr;
    cout << "Ingrese datos del Producto 1:" << endl;
    cout << "Codigo: "; cin >> primero->data.codigo;
    cin.ignore();
    cout << "Nombre: "; getline(cin, primero->data.nombre);
    cout << "Precio: Q"; cin >> primero->data.precio;

    Nodo* segundo = new Nodo;
    segundo->siguiente = nullptr;
    cout << "\nIngrese datos del Producto 2:" << endl;
    cout << "Codigo: "; cin >> segundo->data.codigo;
    cin.ignore();
    cout << "Nombre: "; getline(cin, segundo->data.nombre);
    cout << "Precio: Q"; cin >> segundo->data.precio;
    primero->siguiente = segundo; // ENLACE MANUAL

    Nodo* tercero = new Nodo;
    tercero->siguiente = nullptr;
    cout << "\nIngrese datos del Producto 3:" << endl;
    cout << "Codigo: "; cin >> tercero->data.codigo;
    cin.ignore();
    cout << "Nombre: "; getline(cin, tercero->data.nombre);
    cout << "Precio: Q"; cin >> tercero->data.precio;
    segundo->siguiente = tercero; // ENLACE MANUAL

    Nodo* cuarto = new Nodo;
    cuarto->siguiente = nullptr;
    cout << "\nIngrese datos del Producto 4:" << endl;
    cout << "Codigo: "; cin >> cuarto->data.codigo;
    cin.ignore();
    cout << "Nombre: "; getline(cin, cuarto->data.nombre);
    cout << "Precio: Q"; cin >> cuarto->data.precio;
    tercero->siguiente = cuarto; // ENLACE MANUAL

    cout << "\n==========================================" << endl;
    cout << "       LISTADO DE PRODUCTOS EN INGRESADOS" << endl;
    cout << "==========================================" << endl;

    double totalAcumulado = 0;
    Nodo* actual = primero;

    while (actual != nullptr) {
        cout << "Codigo: " << actual->data.codigo << endl;
        cout << "Nombre: " << actual->data.nombre << endl;
        cout << "Precio: Q" << actual->data.precio << endl;
        cout << "--------------------------" << endl;

        totalAcumulado += actual->data.precio;
        actual = actual->siguiente;
    }

    cout << "TOTAL ACUMULADO: Q" << totalAcumulado << endl;

    actual = primero;
    while (actual != nullptr) {
        Nodo* temporal = actual;
        actual = actual->siguiente;
        delete temporal;
    }

    return 0;
}