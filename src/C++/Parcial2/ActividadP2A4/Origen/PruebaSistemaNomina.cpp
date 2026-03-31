#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "EmpleadoAsalariado.h"
#include "EmpleadoPorHoras.h"
#include "EmpleadoPorComision.h"
#include "EmpleadoBaseMasComision.h"
#include "TrabajadorPiezas.h"

int main() {
    EmpleadoAsalariado empleadoAsalariado("John", "Smith", "111-11-1111", 800.00);
    EmpleadoPorHoras empleadoPorHoras("Karen", "Price", "222-22-2222", 16.75, 40);
    EmpleadoPorComision empleadoPorComision("Sue", "Jones", "333-33-3333", 10000, 0.06);
    EmpleadoBaseMasComision empleadoBaseMasComision("Bob", "Lewis", "444-44-4444", 5000, 0.04, 300);
    TrabajadorPiezas trabajadorPiezas("Steve", "Jobs", "555-55-5555", 2.50, 200);

    std::cout << "Empleados procesados por separado:\n\n";

    std::cout << empleadoAsalariado.toString() << "\ningresos: $" 
              << std::fixed << std::setprecision(2) << empleadoAsalariado.ingresos() << "\n\n";
              
    std::cout << empleadoPorHoras.toString() << "\ningresos: $" 
              << empleadoPorHoras.ingresos() << "\n\n";

    std::cout << empleadoPorComision.toString() << "\ningresos: $" 
              << empleadoPorComision.ingresos() << "\n\n";

    std::cout << empleadoBaseMasComision.toString() << "\ningresos: $" 
              << empleadoBaseMasComision.ingresos() << "\n\n";

    std::cout << trabajadorPiezas.toString() << "\ningresos: $" 
              << trabajadorPiezas.ingresos() << "\n\n";

    std::vector<Empleado*> empleados(5);
    empleados[0] = &empleadoAsalariado;
    empleados[1] = &empleadoPorHoras;
    empleados[2] = &empleadoPorComision;
    empleados[3] = &empleadoBaseMasComision;
    empleados[4] = &trabajadorPiezas;

    std::cout << "Empleados procesados en forma polimorfica:\n\n";

    for (Empleado* empleadoActual : empleados) {
        std::cout << empleadoActual->toString() << "\n";

        EmpleadoBaseMasComision* empleadoBase = dynamic_cast<EmpleadoBaseMasComision*>(empleadoActual);
        if (empleadoBase != nullptr) {
            double salarioBaseAnterior = empleadoBase->obtenerSalarioBase();
            empleadoBase->establecerSalarioBase(1.10 * salarioBaseAnterior);
            std::cout << "el nuevo salario base con 10% de aumento es : $" 
                      << empleadoBase->obtenerSalarioBase() << "\n";
        }

        std::cout << "ingresos $" << empleadoActual->ingresos() << "\n\n";
    }

    for (size_t j = 0; j < empleados.size(); ++j) {
        std::cout << "El empleado " << j << " es un " << typeid(*empleados[j]).name() << "\n";
    }

    return 0;
}
