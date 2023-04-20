#include "Cinta.h"

Cinta::Cinta()
{
};

Cinta::Cinta(int id, String^ color, int tipo, int posicionx, int posiciony, int estado)
{
	this->id = id;
	this->color = color;
	this->tipo = tipo;
	this->posicionx = posicionx;
	this->posiciony = posiciony;
	this->estado = estado;
};