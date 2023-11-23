#ifndef MOTOR_H
#define MOTOR_H

class Motor {
private:
    int cilindros;
    std::string material;

public:
    // Constructor por defecto
    Motor() : cilindros(0), material("") {}

    // Constructor con par�metros
    Motor(int _cilindros, const std::string& _material): cilindros(_cilindros), material(_material) {}

    // M�todos de acceso para cilindros
    void set_cilindros(int _cilindros) {
        cilindros = _cilindros;
    }

    int get_cilindros() const {
        return cilindros;
    }

    // M�todos de acceso para material
    void set_material(const std::string& _material) {
        material = _material;
    }

    std::string get_material() const {
        return material;
    }

    // M�todo para imprimir datos del motor
    void imprime_datos() const {
        std::cout << "Cilindros: " << cilindros << std::endl;
        std::cout << "Material: " << material << std::endl;
    }
};

#endif MOTOR_H
