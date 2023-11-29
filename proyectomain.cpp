/*Manuel Bajos Rivera
Proyecto: Agencia de Renta de coches
A01711581
30/11/23
*/
//bibliotecas
#include "coche.h"//clase que se ocupa para crear objeto(clase hija/herencia)
#include "van.h"//clase que se ocupa para crear objeto(clase hija/herencia)
#include "moto.h"//clase que se ocupa para crear objeto(clase hija/herencia)
#include "vehiculo.h"//clase que se ocupo para crear las otras(clase padre/herencia)
#include <iostream>//para imprimir
using namespace std; //para no tener que usar std::

// Función principal del programa
int main() {
    // Solicitar al usuario su nombre
    cout << "Escribe tu nombre: " << endl;
    string nombre;
    cin >> nombre;

    // Solicitar al usuario las horas que va a rentar
    cout << "Horas que vas a rentar:" << endl;
    int h;
    cin >> h;

    // Solicitar al usuario que escoja una opción: coche, moto o van
    cout << "Escoge una opcion: " << endl;
    cout << "1. coche, 2. moto, 3. van" << endl;
    int opcion;
    cin >> opcion;

    // if que dependiendo la opcion que lo escoja le mandara a una diferente sección.
    if (opcion == 1) {
        // Opción: Coche
        cout << "Escoge un coche: " << endl;
        cout << " 1. Mazda 3 Sedan, 2. Volkswagen Jetta, 3. Honda Civic" << endl;
        int decision;
        cin >> decision;

        if (decision == 1) {
            // Crear objeto Coche (Mazda)
            Coche mazda(4, 2020, "Mazda", h, nombre, 2, 89);
            mazda.set_numero_puertas(4);
            mazda.motor.set_cilindros(4);
            mazda.motor.set_material("metal");
            mazda.mostrar_info();
            mazda.mostrar_datoscoche();
            mazda.imprime_datos();
            cout << "Total: " << mazda.calcular_tarifa();
        }
        else if (decision == 2) {
            // Crear objeto Coche (Jetta)
            Coche jetta(4, 2020, "Volkswagen", h, nombre, 2, 89);
            jetta.set_numero_puertas(4);
            jetta.motor.set_cilindros(5);
            jetta.motor.set_material("metal");
            jetta.mostrar_info();
            jetta.mostrar_datoscoche();
            jetta.imprime_datos();
            cout << "Total: " << jetta.calcular_tarifa();
        }
        else if (decision == 3) {
            // Crear objeto Coche (Civic)
            Coche civic(4, 2020, "Honda", h, nombre, 2, 89);
            civic.set_numero_puertas(4);
            civic.motor.set_cilindros(4);
            civic.motor.set_material("metal");
            civic.mostrar_info();
            civic.mostrar_datoscoche();
            civic.imprime_datos();
            cout << "Total: " << civic.calcular_tarifa();
        }
        else {
            cout << "Opción inválida" << endl;
        }
    }
    else if (opcion == 2) {
        // Opción: Moto
        cout << "Escoge una moto: " << endl;
        cout << " 1. Italika DT 125, 2. Vento Urban Sport Vento, 3. Suzuki Gixxer ABS Naked Negra" << endl;
        int decision;
        cin >> decision;

        if (decision == 1) {
            // Crear objeto Moto (Italika DT 125)
            Moto dt(2, 2020, "Italika", h, nombre, 107, 55);
            dt.mostrar_info();
            dt.motor.set_cilindros(4);
            dt.motor.set_material("metal");
            dt.set_peso(107);
            dt.imprime_datos2();
            dt.mostrar_datos();
            cout << "Tarifa: " << dt.calcular_tarifa();
        }
        else if (decision == 2) {
            // Crear objeto Moto (Urban)
            Moto urban(2, 2020, "Vento", h, nombre, 115, 55);
            urban.mostrar_info();
            urban.motor.set_cilindros(4);
            urban.motor.set_material("metal");
            urban.set_peso(115);
            urban.imprime_datos2();
            urban.mostrar_datos();
            cout << "Tarifa: " << urban.calcular_tarifa();
        }
        else if (decision == 3) {
            // Crear objeto Moto (Gixxer)
            Moto gixxer(2, 2020, "Suzuki", h, nombre, 115, 55);
            gixxer.mostrar_info();
            gixxer.motor.set_cilindros(4);
            gixxer.motor.set_material("metal");
            gixxer.set_peso(115);
            gixxer.imprime_datos2();
            gixxer.mostrar_datos();
            cout << "Tarifa: " << gixxer.calcular_tarifa();
        }
        else {
            cout << "Opción inválida" << endl;
        }
    }
    else if (opcion == 3) {
        // Opción: Van
        cout << "Escoge una van: " << endl;
        cout << " 1. Volkswagen Tayumo, 2. Mercedes Benz Sprinter, 3. Toyota Costa Coaster" << endl;
        int decision;
        cin >> decision;

        if (decision == 1) {
            // Crear objeto Van (Tayumo)
            Van tayumo(4, 2020, "Volkswagen", h, nombre, 4, 27);
            tayumo.motor.set_cilindros(6);
            tayumo.motor.set_material("aluminio");
            tayumo.set_numero_puertas(4);
            tayumo.mostrar_info();
            tayumo.mostrar_datosvan();
            tayumo.imprime_datos3();
            cout << "Tarifa: " << tayumo.calcular_tarifa();
        }
        else if (decision == 2) {
            // Crear objeto Van (Benz)
            Van benz(4, 2020, "Mercedes", h, nombre, 4, 27);
            benz.motor.set_cilindros(6);
            benz.motor.set_material("aluminio");
            benz.set_numero_puertas(4);
            benz.mostrar_info();
            benz.mostrar_datosvan();
            benz.imprime_datos3();
            cout << "Tarifa: " << benz.calcular_tarifa();
        }
        else if (decision == 3) {
            // Crear objeto Van (Costa)
            Van costa(4, 2020, "Toyota", h, nombre, 4, 27);
            costa.motor.set_cilindros(6);
            costa.motor.set_material("aluminio");
            costa.set_numero_puertas(4);
            costa.mostrar_info();
            costa.mostrar_datosvan();
            costa.imprime_datos3();
            cout << "Tarifa: " << costa.calcular_tarifa();
        }
        else{
            cout<<"opcion invalida"<<endl;
        }
    }
    else{
        cout<<"opcion invalida"<<endl;
    }

    return 0;
}
