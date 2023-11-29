#include "coche.h"
#include "van.h"
#include "moto.h"
#include "vehiculo.h"
#include <iostream>
using namespace std;

int main() {
    cout<<"Escribe tu nombre: "<<endl;
    string nombre;
    cin>> nombre;
    cout<<"horas que vas a rentar:"<<endl;
    int h;
    cin>>h;
    cout<<"Escoge una opcion: "<<endl;
    cout<<"1. coche, 2. moto, 3. van"<<endl;
    int opcion;
    cin>> opcion;

    if (opcion == 1){
        cout<<"¿que coche quisieras?"<<endl;
        cout<<" 1. mazda 3 sedan, 2. volkswagen Jetta, 3. Honda civic"<<endl;
        int decision;
        cin>>decision;

        if (decision == 1){
            Coche mazda(4, 2020, "Mazda", h, nombre, 2, 89);
            mazda.motor.set_cilindros(4);
            mazda.motor.set_material("metal");
            mazda.mostrar_info(); // Agregado paréntesis para llamar a la función
            mazda.mostrar_datoscoche();
            cout<<"total: "<<mazda.calcular_tarifa();
        }
        else if(decision == 2){
            Coche jetta(4, 2020, "volkswagen", h, nombre, 2, 89);
            jetta.motor.set_cilindros(5);
            jetta.motor.set_material("metal");
            jetta.mostrar_info(); // Agregado paréntesis para llamar a la función
            jetta.mostrar_datoscoche();
            cout<<"total: "<<jetta.calcular_tarifa();
        }
        else if(decision == 3){
            Coche civic(4, 2020, "volkswagen", h, nombre, 2, 89);
            civic.motor.set_cilindros(4);
            civic.motor.set_material("metal");
            civic.mostrar_info(); // Agregado paréntesis para llamar a la función
            civic.mostrar_datoscoche();
            cout<<"total: "<<civic.calcular_tarifa();
        }
        else{
            cout<<"opcion invalida"<<endl;
        }
    }
    else if (opcion == 2){
        cout<<"¿que moto quisieras?"<<endl;
        cout<<" 1. Italika DT 125, 2. Vento Urban Sport Vento, 3. Suzuki gixxer abs naked negra"<<endl;
        int decision;
        cin>>decision;

        if (decision == 1){
            Moto dt(2, 2020, "Italika", h, nombre, 107, 55);
            dt.mostrar_info(); // Llamada a la función mostrar_info dentro de cout
            dt.motor.set_cilindros(4);
            dt.motor.set_material("metal");
            dt.mostrar_datos();
            cout << "Tarifa: " << dt.calcular_tarifa() <<endl; // Agregado paréntesis
        }
        else if(decision == 2){
            Moto urban(2, 2020, "Vento", h, nombre,115, 55);
            urban.mostrar_info(); // Llamada a la función mostrar_info dentro de cout
            urban.motor.set_cilindros(4);
            urban.motor.set_material("metal");
            urban.mostrar_datos();
            cout << "Tarifa: " << urban.calcular_tarifa() <<endl; // Agregado paréntesis
        }
        else if(opcion == 3){
            Moto gixxer(2, 2020, "Vento", h, nombre,115, 55);
            gixxer.mostrar_info(); // Llamada a la función mostrar_info dentro de cout
            gixxer.motor.set_cilindros(4);
            gixxer.motor.set_material("metal");
            gixxer.mostrar_datos();
            cout << "Tarifa: " << gixxer.calcular_tarifa() <<endl; // Agregado paréntesis
        }
        else{
            cout<<"opcion invalida"<<endl;
        }
    }
    else if(opcion == 3){
        cout<<"¿que van quisieras?"<<endl;
        cout<<" 1.Volkswagen Tayumo, 2.Mercedes Benz Sprinter, 3. Toyota Costa Coaster"<<endl;
        int decision;
        cin>>decision;

        if(decision == 1){
            Van tayumo(4,2020,"Volkswagen",h,nombre,4,27);
            tayumo.motor.set_cilindros(6);
            tayumo.motor.set_material("aluminio");
            tayumo.mostrar_info();
            tayumo.mostrar_datosvan();
            cout<<"tarifa: "<<tayumo.calcular_tarifa()<<endl;
        }
        else if(decision == 2){
            Van benz(4,2020,"Mercedes",h,nombre,4,27);
            benz.motor.set_cilindros(6);
            benz.motor.set_material("aluminio");
            benz.mostrar_info();
            benz.mostrar_datosvan();
            cout<<"tarifa: "<<benz.calcular_tarifa()<<endl;
        }
        else if(decision == 3){
            Van costa(4,2020,"Toyota",h,nombre,4,27);
            costa.motor.set_cilindros(6);
            costa.motor.set_material("aluminio");
            costa.mostrar_info();
            costa.mostrar_datosvan();
            cout<<"tarifa: "<<costa.calcular_tarifa()<<endl;
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

