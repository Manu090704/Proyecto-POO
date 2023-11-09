//clases de proyecto
#include <iostream>

using namespace std; // para evitar escribir std:: antes de cout, endl, etc.

class Trailer {
private:
    int llantas;
    float modelo;

public:
    Trailer(int, float); // Constructor de la clase
    void numero_de_llantas();
    void ano_de_creacion();
};

// Constructor de Vehiculo
Trailer::Trailer(int _llantas, float _anosdevida) {
    llantas = _llantas;
    modelo = _anosdevida;
}

void Trailer::numero_de_llantas() {
    cout << "Numero de llantas: " << llantas <<endl;
}

void Trailer::ano_de_creacion() {
    cout << "Soy modelo: " << (int)modelo << endl;
}
