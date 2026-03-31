#ifndef EMPLEADO_POR_HORAS_H
#define EMPLEADO_POR_HORAS_H

#include "Empleado.h"

class EmpleadoPorHoras : public Empleado {
private:
    double sueldo;
    double horas;

public:
    EmpleadoPorHoras(const std::string&, const std::string&, const std::string&, double, double);
    virtual ~EmpleadoPorHoras() = default;

    void establecerSueldo(double);
    double obtenerSueldo() const;

    void establecerHoras(double);
    double obtenerHoras() const;

    virtual double ingresos() const override;
    virtual std::string toString() const override;
};

#endif
