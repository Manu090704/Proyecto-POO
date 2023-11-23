#include<iostream>
#include"vehiculo.h"
#include"motor.h"

class Moto : public Vehiculo {
private:
    int peso;
    int tarifa;


public:
    Motor motor;
    Moto();
    Moto(int, int, std::string, int, std::string, int, int);
    int calcular_tarifa();
    void set_peso(int);
    int get_peso();
    void mostrar_datos();
};

Moto::Moto() : peso(0), tarifa(0) {}

Moto::Moto(int _llantas, int _modelo, std::string _marca, int _horas, std::string _nu, int _peso, int _tarifa): Vehiculo(_llantas, _modelo, _marca, _horas, _nu), peso(_peso), tarifa(_tarifa) {}

int Moto::calcular_tarifa() {
    return horas * tarifa;
}

void Moto::set_peso(int _peso) {
    peso = _peso;
}

int Moto::get_peso() {
    return peso;
}

void Moto::mostrar_datos(){
    motor.imprime_datos();
}
