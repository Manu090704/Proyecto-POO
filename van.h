#include<iostream>
#include"vehiculo.h"
#include"motor.h"

class Van : public Vehiculo {
private:
    int num_puertas;
    int tarifa;

public:
    Motor motor;
    Van();
    Van(int, int, std::string, int, std::string, int, int);
    int calcular_tarifa();
    void set_numero_puertas(int);
    int get_numero_puertas();
    void mostrar_datosvan();
};

Van::Van() : num_puertas(0), tarifa(0) {}

Van::Van(int _llantas, int _modelo, std::string _marca, int _horas, std::string _nu, int _num, int _tarifa): Vehiculo(_llantas, _modelo, _marca, _horas, _nu), num_puertas(_num), tarifa(_tarifa) {}

int Van::calcular_tarifa() {
    return horas * tarifa;
}

void Van::set_numero_puertas(int _num) {
    num_puertas = _num;
}

int Van::get_numero_puertas() {
    return num_puertas;
}
void Van::mostrar_datosvan(){
    motor.imprime_datos();
}
