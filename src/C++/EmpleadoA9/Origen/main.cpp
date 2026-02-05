#include <iostream>
#include "Empleado.h"

using namespace std;

int main()
{
    Empleado objeto1;
    Empleado objeto2("Donald Trump", 2025, 400000.99);
    Empleado objeto3;
    
    cout << objeto1.toString() << endl;
    cout << "Salario anual: " << objeto1.calcularSalario() << endl;

    cout << objeto2.toString() << endl;
    cout << "Salario anual: " << objeto2.calcularSalario() << endl;

    string nombre;
    int anio;
    double salario;

    cout << "Ingrese el nombre del empleado: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Ingrese el anio de contratacion: ";
    cin >> anio;

    cout << "Ingrese el salario: ";
    cin >> salario;

    objeto3.setNombre(nombre);
    objeto3.setAnioContratacion(anio);
    objeto3.setSalario(salario);

    cout << objeto3.toString() << endl;
    cout << "Salario anual: " << objeto3.calcularSalario() << endl;

    return 0;
}