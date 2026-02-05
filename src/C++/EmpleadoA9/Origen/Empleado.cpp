#include <iostream>
#include <string>
#include "Empleado.h"

using namespace std;

// Constructor por defecto
Empleado::Empleado() {
    this->nombre = "NULL";
    this->anioContratacion = 0;
    this->salario = 0.0;
}

// Constructor con parámetros
Empleado::Empleado(string n, int a, double s) {
    this->nombre = n;
    this->anioContratacion = a;
    this->salario = s;
}

// Getters
string Empleado::getNombre() {
    return this->nombre;
}

int Empleado::getAnioContratacion() {
    return this->anioContratacion;
}

double Empleado::getSalario() {
    return this->salario;
}

// Setters
void Empleado::setNombre(string n) {
    this->nombre = n;
}

void Empleado::setAnioContratacion(int a) {
    this->anioContratacion = a;
}

void Empleado::setSalario(double s) {
    this->salario = s;
}

// Métodos
string Empleado::toString() {
    return this->nombre + " " +
           to_string(this->anioContratacion) + " " +
           to_string(this->salario);
}

double Empleado::calcularSalario() {
    return this->salario * 12;
}
