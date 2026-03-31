#ifndef TRABAJADOR_PIEZAS_H
#define TRABAJADOR_PIEZAS_H

#include "Empleado.h"

class TrabajadorPiezas : public Empleado {
private:
    double salario;
    int piezas;

public:
    TrabajadorPiezas(const std::string&, const std::string&, const std::string&, double, int);
    virtual ~TrabajadorPiezas() = default;

    void establecerSalario(double);
    double obtenerSalario() const;

    void establecerPiezas(int);
    int obtenerPiezas() const;

    virtual double ingresos() const override;
    virtual std::string toString() const override;
};

#endif
