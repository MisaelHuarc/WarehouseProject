#include "Estanteria.h"
Estanteria::Estanteria()
{
}

Estanteria::Estanteria(int id, int posicionx, int posiciony, int orientacion, List<Producto^>^ listaProducto)
{
	this->id = id;
	this->posicionx = posicionx;
	this->posiciony = posiciony;
	this->orientacion = orientacion;
	this->listaProducto = listaProducto;
}
