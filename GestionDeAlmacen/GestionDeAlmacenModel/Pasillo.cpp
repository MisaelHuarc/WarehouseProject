#include "Pasillo.h"
Pasillo::Pasillo()
{
}

Pasillo::Pasillo(int id, List<Estanteria^>^ listaEstanteria)
{
	this->id = id;
	this->listaEstanteria = listaEstanteria;
}
