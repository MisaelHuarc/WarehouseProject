#pragma once

using namespace System;
namespace GestionDeAlmacenModel {
	public ref class Empleado {
	private:
		int id;
		String^ nombre;
		String^ apellido;
		int tipo;
		String^ usuario;
		String^ password;
	public:
		Empleado();
		Empleado(int id, String^ nombre, String^ apellido, int tipo, String^ usuario, String^ password);
		void LogIn();
		void LogOut();
		void ConsultaReportes();
		void GenerarReportes();
		void VerProductos();
		void RegistrarProducto();
		void ActualizarProducto();
		void EliminarProducto();
		void ConsultarEstanteria();
		void AgregarEstanteria();
		void EliminarEstanteria();
		void ActualizarEstanteria();

	};
	
}