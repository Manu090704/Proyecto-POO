//clases de proyecto
#include <iostream>

using namespace std; // para evitar escribir std:: antes de cout, endl, etc.

class Coche {
private:
    int llantas;
    float modelo;

public:
    Coche(int, float); // Constructor de la clase
    void num_de_llantas();
    void anos_de_vida();
};

// Constructor de Vehiculo
Coche::Coche(int _llantas, float _anosdevida) {
    llantas = _llantas;
    modelo = _anosdevida;
}

void Coche::num_de_llantas() {
    cout << "Numero de llantas: " << llantas <<endl;
}

void Coche::anos_de_vida() {
    cout << "Soy modelo: " << (int)modelo << endl;
}

