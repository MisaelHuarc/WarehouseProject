#pragma once
#include "Producto.h"
using namespace System::Collections::Generic;
namespace GestionDeAlmacenModel {
	public ref class Estanteria
	{
	public:
		Estanteria();
		Estanteria(int id, int posicionx, int posiciony, int orientacion, List<Producto^>^ listaProducto);
		void AgregarProducto();
		void QuitarProducto();
		void GetProducto();
	private:
		int id;
		int posicionx;
		int posiciony;
		int orientacion;
		int cantidad;
		List<Producto^>^ listaProducto;
	};
}


