#include "Sensor.h"
using namespace GestionDeAlmacenModel;

Sensor::Sensor() {

}
Sensor::Sensor(int id, String^ tipo) {
	this->id = id;
	this->tipo = tipo;
}
