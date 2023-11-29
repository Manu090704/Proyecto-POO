/*Manuel Bajos Rivera
Proyecto: Agencia de Renta de coches
A01711581
30/11/23
*/
//bibliotecas
#include<iostream> //para imprimir
#include"vehiculo.h" //las clase padre.
#include"motor.h"  //la clase que se usa como composición

//se declara la clase hijo y se pone que tiene acceso a la parte publica de la clase padre
class Coche : public Vehiculo {
    //los atributos
private:
    int num_puertas;
    int tarifa;
//los metodos y el objeto que la compone
public:
    Motor motor;
    Coche();
    Coche(int, int, std::string, int, std::string, int, int);
    int calcular_tarifa();
    void set_numero_puertas(int);
    int get_numero_puertas();
    void mostrar_datoscoche();
    void set_tarifa(int);
    int get_tarifa();
    void imprime_datos();
};
//constructor default (por si no resive valores)
Coche::Coche() : num_puertas(0), tarifa(0) {}

//constructor que nos crea el objeto
Coche::Coche(int _llantas, int _modelo, std::string _marca, int _horas, std::string _nu, int _num, int _tarifa): Vehiculo(_llantas, _modelo, _marca, _horas, _nu), num_puertas(_num), tarifa(_tarifa) {}

//calcula cuanto le saldría rentar el coche
int Coche::calcular_tarifa() {
    return horas * tarifa;
}

//los set y get del numero de puertas
void Coche::set_numero_puertas(int _num) {
    num_puertas = _num;
}

int Coche::get_numero_puertas() {
    return num_puertas;
}

//los set y get de la tarifa
void Coche::set_tarifa(int _tarifa){
    tarifa = _tarifa;
}

int Coche::get_tarifa(){
    return tarifa;
}

//la funcion que muestra los datos del motor mandando a llamar una funcion de motor
void Coche::mostrar_datoscoche(){
    motor.imprime_datos();
}
//muestra el numero de puertas
void Coche::imprime_datos(){
    cout<<"numero de puertas: "<<num_puertas<<endl;
}
