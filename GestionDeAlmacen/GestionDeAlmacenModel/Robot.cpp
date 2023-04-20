#include "Robot.h"

using namespace	GestionDeAlmacenModel;

Robot::Robot() {

}
Robot::Robot(int posicionx, int posiciony, String^ direccion, String^ estado) {
	this->posicionx = posicionx;
	this->posiciony = posiciony;
	this->direccion = direccion;
	this->estado = estado;
}

