Proyecto: Renta de vehículos.
Datos del Alumno:
Manuel Bajos Rivera A01711581

Novedades del avance:
Se modifico el UML añadiendo una clase más que es la que se usa como composición.
Se modifico el código.
Se creo la clase padre que es vehículo y de ahí a las clases hijas que fueron coche,van y moto.
Se añadió el uso de composición entre el motor y las clases hijas.
Se añadió un menu y más interacción con el usuario, se le pide su nombre y que ponga las horas que va a rentar.

Descripción del proyecto:
Programa donde se puede regsitrar el nombre de la persona que renta el vehículo y se muestre el modelo, la marca,datos sobre el motor y cuanto le va a costar rentar.

Funcionalidad:
1.Registrar el nombre de la persona que va a rentar el vehículo.
2. Calcular cuanto le costaria al usuario la renta.
3. Mostrar información del vehículo.
4.Mostrar información sobre el motor.

Clases y metodos:
Vehículo:(llantas,modelo,marca,horas,nombre de usuario)
Vehículo que recibe los valores(el constructor).
get_(nombreusuario,llantas,modelo,marca):
Muestran el valor  del atributo.

setter_horas():
le pone valor al atributo horas.

mostrar_info():
imprime toda la información sobre el vehículo.

Coche:(puertas,tarifa)
coche: constructor
calcular_tarifa:
calcula cuanto le costaría a la persona rentar el coche por el número de horas.
get_num_puertas:
Te dice cuantas puertas tiene el coche.
mostrar datoscoche:
usa una función de motor.

van:(puertas,tarifa)
van: constructor
calcular_tarifa:
calcula cuanto le costaría a la persona rentar la  van por el número de horas.
get_num_puertas:
Te dice cuantas puertas tiene la van.
mostrar datosvan:
usa una función de motor.

moto:(peso,tarifa)
get_peso:
Te muestra el peso de la moto.
calcula tarifa:
multiplica las horas por el precio y te dice cuanto sería.
mostrar datos:
usa una función de motor.

motor(cilindros,material):(clase que se usa para composición de las otras)
set_cilindros:
es para introducir los numeros de cilindros.
set_material:
es para introducir el tipo de material.
imprime datos:
imprime el numero de cilindros y el tipo de material.
calcular_tarifa:
Calcula  cuanto te costaría rentar la moto por el número de horas.
