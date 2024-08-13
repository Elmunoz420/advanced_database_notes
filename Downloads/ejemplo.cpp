#include <iostream>
using namespace std;

struct Profesor {
    int ID;
    string nombre;
    string email;
    int telefono;
};

int main()
{
    Profesor profesor;
    
    // Pedir datos al usuario
    cout << "Ingrese ID: ";
    cin >> profesor.ID;
   
    cout << "Ingrese Nombre: ";
    cin >> profesor.nombre;

    cout << "Ingrese Email: ";
    cin >> profesor.email;

    cout << "Ingrese Telefono: ";
    cin >> profesor.telefono;

    // Mostrar los datos ingresados
    cout << "\nDatos del Profesor:" << endl;
    cout << "ID: " << profesor.ID << endl;
    cout << "Nombre: " << profesor.nombre << endl;
    cout << "Email: " << profesor.email << endl;
    cout << "Telefono: " << profesor.telefono << endl;

    return 0;
}


