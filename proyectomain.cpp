#include"Coche.h"
#include"Trailer.h"
#include"Moto.h"
#include<iostream>

int main() {
    Coche miVehiculo(4, 2018); // Crear un objeto Vehiculo con 4 llantas y a�o de modelo 2018
    miVehiculo.num_de_llantas(); // Imprimir el n�mero de llantas
    miVehiculo.anos_de_vida();   // Imprimir el a�o de modelo

    cout<<endl;
    Trailer clasico(6,2011);
    clasico.numero_de_llantas();
    clasico.ano_de_creacion();

    cout<<endl;
    Moto suzuki(2,2020);
    suzuki._num_de_llantas();
    suzuki._anos_de_vida();

    return 0;
}
