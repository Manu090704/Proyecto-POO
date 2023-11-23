#include<iostream>
#include"vehiculo.h"
#include"motor.h"

class Coche : public Vehiculo {
private:
    int num_puertas;
    int tarifa;

public:
    Motor motor;
    Coche();
    Coche(int, int, std::string, int, std::string, int, int);
    int calcular_tarifa();
    void set_numero_puertas(int);
    int get_numero_puertas();
    void mostrar_datoscoche();
};

Coche::Coche() : num_puertas(0), tarifa(0) {}

Coche::Coche(int _llantas, int _modelo, std::string _marca, int _horas, std::string _nu, int _num, int _tarifa): Vehiculo(_llantas, _modelo, _marca, _horas, _nu), num_puertas(_num), tarifa(_tarifa) {}
int Coche::calcular_tarifa() {
    return horas * tarifa;
}

void Coche::set_numero_puertas(int _num) {
    num_puertas = _num;
}

int Coche::get_numero_puertas() {
    return num_puertas;
}
void Coche::mostrar_datoscoche(){
    motor.imprime_datos();
}
