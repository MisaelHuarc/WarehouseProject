#pragma once
#include "Producto.h";

using namespace System;
using namespace System::Collections::Generic;

namespace GestionDeAlmacenModel {
	public ref class FormularioProducto
	{
	public:
		FormularioProducto();
		FormularioProducto(int id, String^ nombreProducto, int idRobot, int cantidad, int tipoOperacion, List<Producto^>^ listaProducto);
		int SetIdRobot();
		void GetIdRobot();
		void SetCantidad();
		int GetCantidad();
		void SetTipoOperacion();
		int GetTipoOperacion();

	private:
		int id;
		String^ nombreProducto;
		int idRobot;
		int cantidad;
		int tipoOperacion;
		List<Producto^>^ listaProducto;
	};
}




