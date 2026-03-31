#pragma once

#include <string>
using namespace std;

class Empleado {
private:
    string primerNombre;
    string apellidoPaterno;
    string numeroSeguroSocial;

public:
    Empleado(string, string, string);
    void establecerPrimerNombre(string);
    string obtenerPrimerNombre();
    void establecerApellidoPaterno(string);
    string obtenerApellidoPaterno();
    void establecerNumeroSeguroSocial(string);
    string obtenerNumeroSeguroSocial();
    virtual string toString();
    virtual double ingresos() = 0;
};

class EmpleadoAsalariado : public Empleado {
private:
    double salarioSemanal;

public:
    EmpleadoAsalariado(string, string, string, double);
    void establecerSalarioSemanal(double);
    double obtenerSalarioSemanal();
    double ingresos() override;
    string toString() override;
};

class EmpleadoPorComision : public Empleado {
protected:
    double ventasBrutas;
    double tarifaComision;

public:
    EmpleadoPorComision(string, string, string, double, double);
    void establecerVentasBrutas(double);
    double obtenerVentasBrutas();
    void establecerTarifaComision(double);
    double obtenerTarifaComision();
    virtual double ingresos() override;
    virtual string toString() override;
};

class EmpleadoPorHoras : public Empleado {
private:
    double sueldo;
    double horas;

public:
    EmpleadoPorHoras(string, string, string, double, double);
    void establecerSueldo(double);
    double obtenerSueldo();
    void establecerHoras(double);
    double obtenerHoras();
    double ingresos() override;
    string toString() override;
};

class EmpleadoBaseMasComision : public EmpleadoPorComision {
private:
    double salarioBase;

public:
    EmpleadoBaseMasComision(string, string, string, double, double, double);
    void establecerSalarioBase(double);
    double obtenerSalarioBase();
    double ingresos() override;
    string toString() override;
};

class TrabajadorPiezas : public Empleado {
private:
    double salario;
    int piezas;

public:
    TrabajadorPiezas(string, string, string, double, int);
    void establecerSalario(double);
    double obtenerSalario();
    void establecerPiezas(int);
    int obtenerPiezas();
    double ingresos() override;
    string toString() override;
};
