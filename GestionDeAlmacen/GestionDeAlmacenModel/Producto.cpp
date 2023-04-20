#include "Producto.h"

Producto::Producto()
{
}

Producto::Producto(int id, String^ nombre, int cantidad, String^ descripcion, int id_imagen)
{
	this->id = id;
	this->nombre = nombre;
	this->cantidad = cantidad;
	this->descripcion = descripcion;
	this->id_imagen = id_imagen;

}