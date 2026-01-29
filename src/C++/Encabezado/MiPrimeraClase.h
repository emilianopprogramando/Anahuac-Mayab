#pragma once

// Contiene las declaraciones de las clases
#include <string>
using namespace std;

class Usuario {
    // Declaración de atributos
public:
        string nombre;
        string apellidos;
        int edad;

        // Constructor por defecto
        Usuario();

        // Constructor
        Usuario(string nombre, string apellidos, int edad);

        // Declaración de métodos (funciones)
        void iniciarSesion();
        void cerrarSesion();
        void hacerReporte();
};

