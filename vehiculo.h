#ifndef VEHICULO_H
#define VEHICULO_H
#include<iostream>
using namespace std;

class Vehiculo{
private:
    int llantas;
    int modelo;
    string marca;
    string nombre_usuario;

public:
    int horas;
    Vehiculo();
    Vehiculo(int, int, string, int, string);
    void set_nombreusuario(string);
    string get_nombreusuario();
    void set_llantas(int);
    int get_llantas();
    void set_horas(int);
    int get_horas();
    void set_modelo(int);
    int get_modelo();
    void set_marca(string);
    string get_marca();
    void mostrar_info();
};

Vehiculo::Vehiculo() {
    llantas = 0;
    modelo = 0;
    marca = "";
    nombre_usuario = "";
    horas = 0;
}

Vehiculo::Vehiculo(int _llantas, int _modelo, string _marca, int _horas, string _nu) {
    llantas = _llantas;
    modelo = _modelo;
    marca = _marca;
    horas = _horas;
    nombre_usuario = _nu;
}

void Vehiculo::set_nombreusuario(string _nu) {
    nombre_usuario = _nu;
}

void Vehiculo::set_llantas(int _llantas) {
    llantas = _llantas;
}

void Vehiculo::set_horas(int _horas) {
    horas = _horas;
}

void Vehiculo::set_modelo(int _modelo) {
    modelo = _modelo;
}

void Vehiculo::set_marca(string _marca) {
    marca = _marca;
}

string Vehiculo::get_nombreusuario() {
    return nombre_usuario;
}

int Vehiculo::get_llantas() {
    return llantas;
}

int Vehiculo::get_horas() {
    return horas;
}

int Vehiculo::get_modelo() {
    return modelo;
}

string Vehiculo::get_marca() {
    return marca;
}

void Vehiculo::mostrar_info() {
    cout <<"usuario: "<< nombre_usuario <<endl;
    cout <<"llantas: "<<llantas <<endl;
    cout <<"horas de renta: "<<horas <<endl;
    cout <<"modelo: "<< modelo <<endl;
    cout << "marca: "<<marca << endl;
}

#endif VEHICULO_H
