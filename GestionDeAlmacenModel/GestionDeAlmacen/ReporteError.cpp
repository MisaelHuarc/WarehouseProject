#include "ReporteError.h"

using namespace GestionDeAlmacenModel;

ReporteError::ReporteError() {

}
ReporteError::ReporteError(int id, int dia, int anho, int hora, int minuto, String^ descripcion, String^ nombreProducto, int idRobot, int cantidad, int tipoOperacion) {
	this->id = dia;
	this->anho = anho;
	this->hora = hora;
	this->minuto = minuto;
	this->descripcion = descripcion;
	this->nombreProducto = nombreProducto;
	this->idRobot = idRobot;
	this->cantidad = cantidad;
	this->tipoOperacion = tipoOperacion;

}
