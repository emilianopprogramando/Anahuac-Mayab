#include <iostream>
#include "MiPrimeraClase.h"

using namespace std;

int main()
{
    // Para acceder a los atributos y métodos de la clase Usuario
    // se requiere crear un objeto (instancia de la clase)

    // Declaración de un objeto
    // nombreClase nombreObjeto();
    Usuario maestra;
    Usuario alumno("Tom", "Cruise", 64);

    // Asignar valores a los atributos
    // maestra.nombre = "Lizbeth";
    // maestra.apellidos = "Hernandez Olan";
    // maestra.edad = 42;
    
    // Llamada (invocación) de los métodos
    maestra.iniciarSesion();
    maestra.hacerReporte();
    maestra.cerrarSesion();

    cout << "" << endl;

    alumno.iniciarSesion();
    alumno.hacerReporte();
    alumno.cerrarSesion();
    

    return 0;
}