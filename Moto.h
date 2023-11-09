//clases de proyecto
#include <iostream>

using namespace std; // para evitar escribir std:: antes de cout, endl, etc.

class Moto {
private:
    int llantas;
    float modelo;

public:
    Moto(int, float); // Constructor de la clase
    void _num_de_llantas();
    void _anos_de_vida();
};

// Constructor de Vehiculo
Moto::Moto(int _llantas, float _anosdevida) {
    llantas = _llantas;
    modelo = _anosdevida;
}

void Moto::_num_de_llantas() {
    cout << "Numero de llantas: " << llantas << endl;
}

void Moto::_anos_de_vida() {
    cout << "Modelo: " << (int)modelo << endl;
}

