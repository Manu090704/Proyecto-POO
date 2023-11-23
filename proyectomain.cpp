#include "coche.h"
#include "van.h"
#include "moto.h"
#include "vehiculo.h"
#include <iostream>
using namespace std;

int main() {
    Coche mustang(4, 2018, "Ferrari", 5, "Manuel", 2, 89);
    mustang.motor.set_cilindros(8);
    mustang.motor.set_material("metal");
    mustang.mostrar_info(); // Agregado par�ntesis para llamar a la funci�n
    mustang.mostrar_datoscoche();
    cout << "Tarifa: " << mustang.calcular_tarifa() << std::endl; // Agregado par�ntesis

    Moto italika(2, 2020, "Italika", 4, "MANU", 20, 55);
    italika.mostrar_info(); // Llamada a la funci�n mostrar_info dentro de cout
    italika.motor.set_cilindros(4);
    italika.mostrar_datos();
    italika.motor.set_material("metal");
    cout << "Tarifa: " << italika.calcular_tarifa() << std::endl; // Agregado par�ntesis

    Van camion(6,2020,"TOYOTA",9,"Yael",4,27);
    camion.motor.set_cilindros(4);
    camion.motor.set_material("plastico");
    camion.mostrar_datosvan();
    camion.mostrar_info();
    cout<<"tarifa: "<<camion.calcular_tarifa()<<endl;

    return 0;
}

