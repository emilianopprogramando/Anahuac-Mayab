#include <iostream>
#include <vector>
#include <typeinfo>
#include "../Encabezado/Empleado.h"

using namespace std;

int main() {
    EmpleadoAsalariado empleadoAsalariado("John", "Smith", "111-11-1111", 800.00);
    EmpleadoPorHoras empleadoPorHoras("Karen", "Price", "222-22-2222", 16.75, 40);
    EmpleadoPorComision empleadoPorComision("Sue", "Jones", "333-33-3333", 10000, 0.06);
    EmpleadoBaseMasComision empleadoBaseMasComision("Bob", "Lewis", "444-44-4444", 5000, 0.04, 300);
    TrabajadorPiezas trabajadorPiezas("Steve", "Jobs", "555-55-5555", 2.50, 200);

    cout << "Empleados procesados por separado:\n\n";

    cout << empleadoAsalariado.toString() << "\ningresos: $" << empleadoAsalariado.ingresos() << "\n\n";
    cout << empleadoPorHoras.toString() << "\ningresos: $" << empleadoPorHoras.ingresos() << "\n\n";
    cout << empleadoPorComision.toString() << "\ningresos: $" << empleadoPorComision.ingresos() << "\n\n";
    cout << empleadoBaseMasComision.toString() << "\ningresos: $" << empleadoBaseMasComision.ingresos() << "\n\n";
    cout << trabajadorPiezas.toString() << "\ningresos: $" << trabajadorPiezas.ingresos() << "\n\n";

    vector<Empleado*> empleados(5);
    empleados[0] = &empleadoAsalariado;
    empleados[1] = &empleadoPorHoras;
    empleados[2] = &empleadoPorComision;
    empleados[3] = &empleadoBaseMasComision;
    empleados[4] = &trabajadorPiezas;

    cout << "Empleados procesados en forma polimorfica:\n\n";

    for (int i = 0; i < empleados.size(); i++) {
        Empleado* empleadoActual = empleados[i];
        cout << empleadoActual->toString() << "\n";

        EmpleadoBaseMasComision* empleadoBase = dynamic_cast<EmpleadoBaseMasComision*>(empleadoActual);
        if (empleadoBase != nullptr) {
            double salarioBaseAnterior = empleadoBase->obtenerSalarioBase();
            empleadoBase->establecerSalarioBase(1.10 * salarioBaseAnterior);
            cout << "el nuevo salario base con 10% de aumento es : $" << empleadoBase->obtenerSalarioBase() << "\n";
        }

        cout << "ingresos $" << empleadoActual->ingresos() << "\n\n";
    }

    for (size_t j = 0; j < empleados.size(); ++j) {
        cout << "El empleado " << j << " es un " << typeid(*empleados[j]).name() << "\n";
    }

    return 0;
}
