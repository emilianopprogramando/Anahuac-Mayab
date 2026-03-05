#pragma once

#include <string>
using namespace std;

class Empleado {
    private:
        string nombre;
        int anioContratacion;
        double salario;

    public:
        Empleado();
        Empleado(string n, int a, double s);

        void setNombre(string n);
        string getNombre(); 

        void setAnioContratacion(int a);
        int getAnioContratacion();

        void setSalario(double s);
        double getSalario();

        string toString();
        double calcularSalario();
};

