#pragma once

// Contiene las declaraciones de las clases
#include <string>
using namespace std;

class Usuario {
    // Declaración de atributos privado
    private:
        string nombre;
        string apellidos;
        int edad;

    public: // Los constructores siempre deben ser publicos.
        // Constructor por defecto
        Usuario();
        // Constructor
        Usuario(string nombre, string apellidos, int edad);

        // Declarar setter y getter
        void setNombre(string nombre);
        string getNombre(); 
        void setApellidos(string apellidos);
        string getApellidos();
        void setEdad(int edad);
        int getEdad();

        // Declaración de métodos (funciones)
        void iniciarSesion();
        void cerrarSesion();
        void hacerReporte();
};

