#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Termometro.h"

using namespace std;

int main() {

    // aleatorio
    srand(time(0));

    // Objeto 1 aleatorio
    Termometro t1;
    cout << "Termometro 1" << endl;
    t1.MostrarTemperaturas();

    // Objeto 2 usuario
    float tempUsuario;
    cout << "\nIngrese una temperatura en C: ";
    cin >> tempUsuario;

    Termometro t2(tempUsuario);
    cout << "\nTermometro 2" << endl;
    t2.MostrarTemperaturas();

    return 0;
}
