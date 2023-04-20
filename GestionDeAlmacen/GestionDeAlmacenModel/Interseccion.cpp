#include "Interseccion.h"

Interseccion::Interseccion()
{
}

Interseccion::Interseccion(int posicionx, int posiciony, List<Cinta^>^ listaCinta)
{
	this->posicionx = posicionx;
	this->posiciony = posiciony;
	this->listaCinta = listaCinta;
}