#include "../Encabezado/Empleado.h"

Empleado::Empleado(string nombre, string apellido, string nss) {
    primerNombre = nombre;
    apellidoPaterno = apellido;
    numeroSeguroSocial = nss;
}

void Empleado::establecerPrimerNombre(string nombre) { primerNombre = nombre; }
string Empleado::obtenerPrimerNombre() { return primerNombre; }
void Empleado::establecerApellidoPaterno(string apellido) { apellidoPaterno = apellido; }
string Empleado::obtenerApellidoPaterno() { return apellidoPaterno; }
void Empleado::establecerNumeroSeguroSocial(string nss) { numeroSeguroSocial = nss; }
string Empleado::obtenerNumeroSeguroSocial() { return numeroSeguroSocial; }

string Empleado::toString() {
    return obtenerPrimerNombre() + " " + obtenerApellidoPaterno() + "\nnumero de seguro social: " + obtenerNumeroSeguroSocial();
}

EmpleadoAsalariado::EmpleadoAsalariado(string nombre, string apellido, string nss, double salario)
    : Empleado(nombre, apellido, nss) {
    establecerSalarioSemanal(salario);
}

void EmpleadoAsalariado::establecerSalarioSemanal(double salario) {
    if (salario < 0.0) salarioSemanal = 0.0;
    else salarioSemanal = salario;
}

double EmpleadoAsalariado::obtenerSalarioSemanal() { return salarioSemanal; }
double EmpleadoAsalariado::ingresos() { return obtenerSalarioSemanal(); }

string EmpleadoAsalariado::toString() {
    return "empleado asalariado: " + Empleado::toString() + "\nsalario semanal: $" + to_string(obtenerSalarioSemanal());
}

EmpleadoPorComision::EmpleadoPorComision(string nombre, string apellido, string nss, double ventas, double tarifa)
    : Empleado(nombre, apellido, nss) {
    establecerVentasBrutas(ventas);
    establecerTarifaComision(tarifa);
}

void EmpleadoPorComision::establecerTarifaComision(double tarifa) {
    if (tarifa > 0.0 && tarifa < 1.0) tarifaComision = tarifa;
    else tarifaComision = 0.0;
}
double EmpleadoPorComision::obtenerTarifaComision() { return tarifaComision; }
void EmpleadoPorComision::establecerVentasBrutas(double ventas) {
    if (ventas < 0.0) ventasBrutas = 0.0;
    else ventasBrutas = ventas;
}
double EmpleadoPorComision::obtenerVentasBrutas() { return ventasBrutas; }
double EmpleadoPorComision::ingresos() { return obtenerTarifaComision() * obtenerVentasBrutas(); }

string EmpleadoPorComision::toString() {
    return "empleado por comision: " + Empleado::toString() + "\nventas brutas: $" + to_string(obtenerVentasBrutas()) + "; tarifa de comision: " + to_string(obtenerTarifaComision());
}

EmpleadoPorHoras::EmpleadoPorHoras(string nombre, string apellido, string nss, double sueldoPorHoras, double horasTrabajadas)
    : Empleado(nombre, apellido, nss) {
    establecerSueldo(sueldoPorHoras);
    establecerHoras(horasTrabajadas);
}

void EmpleadoPorHoras::establecerSueldo(double sueldoPorHoras) {
    if (sueldoPorHoras < 0.0) sueldo = 0.0;
    else sueldo = sueldoPorHoras;
}
double EmpleadoPorHoras::obtenerSueldo() { return sueldo; }
void EmpleadoPorHoras::establecerHoras(double horasTrabajadas) {
    if (horasTrabajadas >= 0.0 && horasTrabajadas <= 168.0) horas = horasTrabajadas;
    else horas = 0.0;
}
double EmpleadoPorHoras::obtenerHoras() { return horas; }

double EmpleadoPorHoras::ingresos() {
    if (obtenerHoras() <= 40) return obtenerSueldo() * obtenerHoras();
    else return 40 * obtenerSueldo() + (obtenerHoras() - 40) * obtenerSueldo() * 1.5;
}

string EmpleadoPorHoras::toString() {
    return "empleado por horas: " + Empleado::toString() + "\nsueldo por hora: $" + to_string(obtenerSueldo()) + "; horas trabajadas: " + to_string(obtenerHoras());
}

EmpleadoBaseMasComision::EmpleadoBaseMasComision(string nombre, string apellido, string nss, double ventas, double tarifa, double salario)
    : EmpleadoPorComision(nombre, apellido, nss, ventas, tarifa) {
    establecerSalarioBase(salario);
}

void EmpleadoBaseMasComision::establecerSalarioBase(double salario) {
    if (salario < 0.0) salarioBase = 0.0;
    else salarioBase = salario;
}
double EmpleadoBaseMasComision::obtenerSalarioBase() { return salarioBase; }
double EmpleadoBaseMasComision::ingresos() { return obtenerSalarioBase() + EmpleadoPorComision::ingresos(); }

string EmpleadoBaseMasComision::toString() {
    return "con salario base " + EmpleadoPorComision::toString() + "\nsalario base: $" + to_string(obtenerSalarioBase());
}

TrabajadorPiezas::TrabajadorPiezas(string nombre, string apellido, string nss, double salarioBase, int piezasHechas)
    : Empleado(nombre, apellido, nss) {
    establecerSalario(salarioBase);
    establecerPiezas(piezasHechas);
}

void TrabajadorPiezas::establecerSalario(double salarioBase) {
    if (salarioBase < 0.0) salario = 0.0;
    else salario = salarioBase;
}
double TrabajadorPiezas::obtenerSalario() { return salario; }
void TrabajadorPiezas::establecerPiezas(int piezasHechas) {
    if (piezasHechas < 0) piezas = 0;
    else piezas = piezasHechas;
}
int TrabajadorPiezas::obtenerPiezas() { return piezas; }
double TrabajadorPiezas::ingresos() { return obtenerSalario() * obtenerPiezas(); }

string TrabajadorPiezas::toString() {
    return "trabajador por piezas: " + Empleado::toString() + "\nsalario por pieza: $" + to_string(obtenerSalario()) + "; piezas producidas: " + to_string(obtenerPiezas());
}
