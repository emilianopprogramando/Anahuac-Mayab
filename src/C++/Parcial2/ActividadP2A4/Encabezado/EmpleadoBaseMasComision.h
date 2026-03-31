#ifndef EMPLEADO_BASE_MAS_COMISION_H
#define EMPLEADO_BASE_MAS_COMISION_H

#include "EmpleadoPorComision.h"

class EmpleadoBaseMasComision : public EmpleadoPorComision {
private:
    double salarioBase;

public:
    EmpleadoBaseMasComision(const std::string&, const std::string&, const std::string&, double, double, double);
    virtual ~EmpleadoBaseMasComision() = default;

    void establecerSalarioBase(double);
    double obtenerSalarioBase() const;

    virtual double ingresos() const override;
    virtual std::string toString() const override;
};

#endif
