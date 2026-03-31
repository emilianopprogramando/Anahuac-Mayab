#ifndef EMPLEADO_ASALARIADO_H
#define EMPLEADO_ASALARIADO_H

#include "Empleado.h"

class EmpleadoAsalariado : public Empleado {
private:
    double salarioSemanal;

public:
    EmpleadoAsalariado(const std::string&, const std::string&, const std::string&, double);
    virtual ~EmpleadoAsalariado() = default;

    void establecerSalarioSemanal(double);
    double obtenerSalarioSemanal() const;

    virtual double ingresos() const override;
    virtual std::string toString() const override;
};

#endif
