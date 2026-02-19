#pragma once
using namespace std;

class Termometro {

private:
    float temperatura;

public:
    // Constructor por defecto
    Termometro();

    // Constructor con parámetro
    Termometro(float t);

    // Métodos
    float temperaturaC();
    float temperaturaF();
    float temperaturaK();

    void MostrarTemperaturas();
};
