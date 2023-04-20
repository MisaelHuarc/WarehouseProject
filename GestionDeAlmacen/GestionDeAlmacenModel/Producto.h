#pragma once
using namespace System;

namespace GestionDeAlmacenModel {
	public ref class Producto
	{
	public:
		Producto();
		Producto(int id, String^ nombre, int cantidad, String^ descripcion, int id_imagen);
		int GetId();
		void SetId();
		String^ GetNombre();
		void SetNombre();
		int GetCantidad();
		void SetCantidad();
		String^ GetDescripcion();
		void SetDescripcion();
		int GetPrecio();
		void SetPrecio();

	private:
		int id;
		String^ nombre;
		int cantidad;
		String^ descripcion;
		double precio;
		int id_imagen;
	};
}


