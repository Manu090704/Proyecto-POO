/*Manuel Bajos Rivera
Proyecto: Agencia de Renta de coches
A01711581
30/11/23
*/

//bibliotecas
#include<iostream> //para imprimir
#include"vehiculo.h" //clase padre
#include"motor.h" //clase de composición

//se declara la clase y se le da acceso a la parte publica de la clase padre(herencia)
class Moto : public Vehiculo {
//los atributos
private:
    int peso;
    int tarifa;

//los metodos y el objeto
public:
    Motor motor;
    Moto();
    Moto(int, int, std::string, int, std::string, int, int);
    int calcular_tarifa();
    void set_peso(int);
    int get_peso();
    void set_tarifa(int);
    int get_tarifa();
    void mostrar_datos();
    void imprime_datos2();
};
//constructor default
Moto::Moto() : peso(0), tarifa(0) {}
//constructor que crea los objetos con los valores que recibe
Moto::Moto(int _llantas, int _modelo, std::string _marca, int _horas, std::string _nu, int _peso, int _tarifa): Vehiculo(_llantas, _modelo, _marca, _horas, _nu), peso(_peso), tarifa(_tarifa) {}
//calcula tarifa
int Moto::calcular_tarifa() {
    return horas * tarifa;
}
//set y get del peso
void Moto::set_peso(int _peso) {
    peso = _peso;
}

int Moto::get_peso() {
    return peso;
}
//los get  y set de tarifa
void Moto::set_tarifa(int _tarifa){
    tarifa = _tarifa;
}

int Moto:: get_tarifa(){
    return tarifa;
}
//funcion que imrpime datos del motor que se obtienen mediante  una funcion
void Moto::mostrar_datos(){
    motor.imprime_datos();
}

//imprime el peso
void Moto::imprime_datos2(){
    cout<<"peso kg: "<<peso<<endl;
}
