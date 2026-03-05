#include "Biblioteca.h"
using namespace std;

Autor::Autor(string nombre, string nacionalidad) {
    this->nombre = nombre;
    this->nacionalidad = nacionalidad;
}

string Autor::toString() {
    return "Nombre: " + this->nombre + "\nNacionalidad: " + this->nacionalidad;
}

Libro::Libro(string titulo, int anioPublicacion, Autor a): autor(a) {
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
    // this->autor = autor;
}

string Libro::ToString() {
    return this->autor.toString() + "\nTitulo: " + this->titulo + "\nAnio de Publicacion: " + to_string(this->anioPublicacion);
}