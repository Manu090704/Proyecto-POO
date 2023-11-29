/*Manuel Bajos Rivera
Proyecto: Agencia de Renta de coches
A01711581
30/11/23
*/
//bibliotecas
#include<iostream> //para imprimir
#include"vehiculo.h" //la que hereda (clase padre)
#include"motor.h" //la que compone
//se crea la clase y se le da acceso a la parte publica de la clase padre
class Van : public Vehiculo {
//atributos
private:
    int num_puertas;
    int tarifa;
//los metodos y la clase que compone
public:
    Motor motor;
    Van();
    Van(int, int, std::string, int, std::string, int, int);
    int calcular_tarifa();
    void set_numero_puertas(int);
    int get_numero_puertas();
    void mostrar_datosvan();
    void imprime_datos3();
};
//constructor default
Van::Van() : num_puertas(0), tarifa(0) {}
//constructor que recibe parametros
Van::Van(int _llantas, int _modelo, std::string _marca, int _horas, std::string _nu, int _num, int _tarifa): Vehiculo(_llantas, _modelo, _marca, _horas, _nu), num_puertas(_num), tarifa(_tarifa) {}
//calcula cuanto va a costar
int Van::calcular_tarifa() {
    return horas * tarifa;
}
//set y get de num de puertas
void Van::set_numero_puertas(int _num) {
    num_puertas = _num;
}

int Van::get_numero_puertas() {
    return num_puertas;
}
//imprime datos del motor, llamando una funcion de motor
void Van::mostrar_datosvan(){
    motor.imprime_datos();
}
//imprime el numero de puertas
void Van::imprime_datos3(){
    cout<<"numero de puertas: "<<num_puertas<<endl;
}
