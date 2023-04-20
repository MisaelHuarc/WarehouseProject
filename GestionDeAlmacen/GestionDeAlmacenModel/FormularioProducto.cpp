#include "FormularioProducto.h"

FormularioProducto::FormularioProducto()
{
}

FormularioProducto::FormularioProducto(int id, String^ nombreProducto, int idRobot, int cantidad, int tipoOperacion, List<Producto^>^ listaProducto)
{
	this->id = id;
	this->nombreProducto = nombreProducto;
	this->idRobot = idRobot;
	this->cantidad = cantidad;
	this->tipoOperacion = tipoOperacion;
	this->listaProducto = listaProducto;
}