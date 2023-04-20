#include "ReporteProducto.h"


ReporteProducto::ReporteProducto()
{
}

ReporteProducto::ReporteProducto(int id, int dia, int mes, int anho, int hora, int minuto, FormularioProducto^ AFormularioProducto)
{
	this->id = id;
	this->dia = dia;
	this->mes = mes;
	this->anho = anho;
	this->hora = hora;
	this->minuto = minuto;
	this->AFormularioProducto = AFormularioProducto;
}