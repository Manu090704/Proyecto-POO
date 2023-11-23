#ifndef MOTOR_H
#define MOTOR_H

class Motor {
private:
    int cilindros;
    std::string material;

public:
    // Constructor por defecto
    Motor() : cilindros(0), material("") {}

    // Constructor con parámetros
    Motor(int _cilindros, const std::string& _material): cilindros(_cilindros), material(_material) {}

    // Métodos de acceso para cilindros
    void set_cilindros(int _cilindros) {
        cilindros = _cilindros;
    }

    int get_cilindros() const {
        return cilindros;
    }

    // Métodos de acceso para material
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

#endif MOTOR_H
