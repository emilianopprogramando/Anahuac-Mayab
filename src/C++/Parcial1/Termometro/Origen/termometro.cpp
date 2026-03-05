#include <iostream>
#include <cstdlib>
#include "Termometro.h"

using namespace std;

// Constructor por defecto
Termometro::Termometro() {
    temperatura = rand() % 101;  // 0 a 100
}

// Constructor con parámetro
Termometro::Termometro(float t) {
    temperatura = t;
}

// Métodos
float Termometro::temperaturaC() {
    return temperatura;
}

float Termometro::temperaturaF() {
    return (temperatura * 9.0f / 5.0f) + 32.0f;
}

float Termometro::temperaturaK() {
    return temperatura + 273.15f;
}

void Termometro::MostrarTemperaturas() {
    cout << "Celsius: " << temperaturaC() << endl;
    cout << "Fahrenheit: " << temperaturaF() << endl;
    cout << "Kelvin: " << temperaturaK() << endl;
}
