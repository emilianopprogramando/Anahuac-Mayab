#include "TrabajadorPiezas.h"
#include <sstream>
#include <iomanip>

TrabajadorPiezas::TrabajadorPiezas(const std::string& nombre, const std::string& apellido, const std::string& nss, double salarioBase, int piezasHechas)
    : Empleado(nombre, apellido, nss) {
    establecerSalario(salarioBase);
    establecerPiezas(piezasHechas);
}

void TrabajadorPiezas::establecerSalario(double salarioBase) {
    salario = (salarioBase < 0.0) ? 0.0 : salarioBase;
}

double TrabajadorPiezas::obtenerSalario() const {
    return salario;
}

void TrabajadorPiezas::establecerPiezas(int piezasHechas) {
    piezas = (piezasHechas < 0) ? 0 : piezasHechas;
}

int TrabajadorPiezas::obtenerPiezas() const {
    return piezas;
}

double TrabajadorPiezas::ingresos() const {
    return obtenerSalario() * obtenerPiezas();
}

std::string TrabajadorPiezas::toString() const {
    std::ostringstream output;
    output << "trabajador por piezas: " << Empleado::toString() 
           << "\nsalario por pieza: $" << std::fixed << std::setprecision(2) << obtenerSalario()
           << "; piezas producidas: " << obtenerPiezas();
    return output.str();
}
