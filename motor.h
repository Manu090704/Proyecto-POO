/*Manuel Bajos Rivera
Proyecto: Agencia de Renta de coches
A01711581
30/11/23
*/

#ifndef MOTOR_H//se utiliza para evitar el error de redireccion ya que se va autilizar en otras clases
#define MOTOR_H
//se crea la clase
class Motor {
//los atributos
private:
    int cilindros;
    std::string material;
//metodos
public:
    // Constructor por defecto
    Motor() : cilindros(0), material("") {}

    // Constructor con parámetros
    Motor(int _cilindros, const std::string& _material): cilindros(_cilindros), material(_material) {}

    // get y set para cilindros
    void set_cilindros(int _cilindros) {
        cilindros = _cilindros;
    }

    int get_cilindros() const {
        return cilindros;
    }

    // set y get para material
    void set_material(const std::string& _material) {
        material = _material;
    }

    std::string get_material() const {
        return material;
    }

    // Método para imprimir datos del motor
    void imprime_datos() const {
        std::cout << "Cilindros: " << cilindros << std::endl;
        std::cout << "Material: " << material << std::endl;
    }
};

#endif
