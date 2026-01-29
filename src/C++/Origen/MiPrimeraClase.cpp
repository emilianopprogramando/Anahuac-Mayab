#include <iostream>
#include "MiPrimeraClase.h"
using namespace std;

// Definir los constructores
Usuario::Usuario() {
    this->nombre = "";
    this->apellidos = "";
    this->edad = 0;
}

Usuario::Usuario(string nombre, string apellidos, int edad) {
    this->nombre = nombre;
    this->apellidos =apellidos;
    this->edad = edad;
}
    
// Definir los métodos
void Usuario::hacerReporte() {
    cout << "El usuario " << this->nombre << " esta iniciando sesion." << endl;
}
void Usuario::iniciarSesion() {
    cout << "El usuario " << this->nombre << " ha cerrado la sesion." << endl;
}
void Usuario::cerrarSesion() {
    cout << "Reporte de usuario" << endl;
    cout << "Nombre completo: " << this->nombre << " " << this->apellidos << endl;
    cout << "Edad: " << this->edad << endl;
}