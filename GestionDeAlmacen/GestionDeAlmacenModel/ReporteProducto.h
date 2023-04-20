#pragma once
#include "FormularioProducto.h"

namespace GestionDeAlmacenModel {
	public ref class ReporteProducto
	{
	public:
		ReporteProducto();
		ReporteProducto(int id, int dia, int mes, int anho, int hora, int minuto, FormularioProducto^ AFormularioProducto);
		void AgregarReporteProducto();
		void GetFecha();
		void SetFecha();
	private:
		int id;
		int dia;
		int mes;
		int anho;
		int hora;
		int minuto;
		FormularioProducto^ AFormularioProducto;
	};
}


