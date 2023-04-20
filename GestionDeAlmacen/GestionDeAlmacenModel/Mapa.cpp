#include "Mapa.h"

Mapa::Mapa()
{
}

Mapa::Mapa(int posxinicial_r1, int posyinicial_r1, int posxinicial_r2, int posyinicial_r2, List<Interseccion^>^ listaIntersecciones, List<Pasillo^>^ listaPasillo)
{
	this->posxinicial_r1 = posxinicial_r1;
	this->posyinicial_r1 = posyinicial_r1;
	this->posxinicial_r2 = posxinicial_r2;
	this->posyinicial_r2 = posyinicial_r2;
	this->listaIntersecciones = listaIntersecciones;
	this->listaPasillo = listaPasillo;
}
