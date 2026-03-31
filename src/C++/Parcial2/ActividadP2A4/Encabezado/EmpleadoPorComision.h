#ifndef EMPLEADO_POR_COMISION_H
#define EMPLEADO_POR_COMISION_H

#include "Empleado.h"

class EmpleadoPorComision : public Empleado {
private:
    double ventasBrutas;
    double tarifaComision;

public:
    EmpleadoPorComision(const std::string&, const std::string&, const std::string&, double, double);
    virtual ~EmpleadoPorComision() = default;

    void establecerVentasBrutas(double);
    double obtenerVentasBrutas() const;

    void establecerTarifaComision(double);
    double obtenerTarifaComision() const;

    virtual double ingresos() const override;
    virtual std::string toString() const override;
};

#endif
