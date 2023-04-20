#include "Empleado.h"

using namespace GestionDeAlmacenModel;

Empleado::Empleado() {

}
Empleado::Empleado(int id, String^ nombre, String^ apellido, int tipo, String^ usuario, String^ password) {
	this->id = id;
	this->nombre = nombre;
	this->apellido = apellido;
	this->tipo = tipo;
	this->usuario = usuario;
	this->password = password;
}