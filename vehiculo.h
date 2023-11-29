/*Manuel Bajos Rivera
Proyecto: Agencia de Renta de coches
A01711581
30/11/23
*/

// etiquetas evitar la inclusión múltiple del archivo de encabezado
#ifndef VEHICULO_H
#define VEHICULO_H

// Inclusión de la biblioteca de entrada/salida estándar
#include<iostream>
using namespace std; //se usa para evitar poner std despues de los cout,cin y string

// Definición de la clase Vehiculo
class Vehiculo{
//atributos
private:
    int llantas;
    int modelo;
    string marca;
    string nombre_usuario;
//metodos y un atributo
public:
    int horas;  // Horas de renta del vehículo


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


// Constructor por defecto
Vehiculo::Vehiculo() {
    llantas = 0;
    modelo = 0;
    marca = "";
    nombre_usuario = "";
    horas = 0;
}

// Constructor con parámetros
Vehiculo::Vehiculo(int _llantas, int _modelo, string _marca, int _horas, string _nu) {
    llantas = _llantas;
    modelo = _modelo;
    marca = _marca;
    horas = _horas;
    nombre_usuario = _nu;
}


// set nombre del usuario
void Vehiculo::set_nombreusuario(string _nu) {
    nombre_usuario = _nu;
}

// set de número de llantas
void Vehiculo::set_llantas(int _llantas) {
    llantas = _llantas;
}

// set de horas de renta
void Vehiculo::set_horas(int _horas) {
    horas = _horas;
}

// set del modelo
void Vehiculo::set_modelo(int _modelo) {
    modelo = _modelo;
}

// set de la marca
void Vehiculo::set_marca(string _marca) {
    marca = _marca;
}

// get del nombre del usuario
string Vehiculo::get_nombreusuario() {
    return nombre_usuario;
}

// get del número de llantas
int Vehiculo::get_llantas() {
    return llantas;
}

// get de las horas de renta
int Vehiculo::get_horas() {
    return horas;
}

// get del modelo
int Vehiculo::get_modelo() {
    return modelo;
}

// get de la marca
string Vehiculo::get_marca() {
    return marca;
}

// Muestra la información del vehículo
void Vehiculo::mostrar_info() {
    cout <<"Usuario: "<< nombre_usuario <<endl;
    cout <<"Llantas: "<<llantas <<endl;
    cout <<"Horas de renta: "<<horas <<endl;
    cout <<"Modelo: "<< modelo <<endl;
    cout <<"Marca: "<<marca << endl;
}

// Fin de las directivas de preprocesador
#endif
